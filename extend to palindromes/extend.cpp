# include <bits/stdc++.h>

using namespace std;

string str,output;

bool check(){
    int j=output.length()-1;
    for(int i=0;i<j;i++){
        if(output[i]!=output[j]) return false;
        j--;
    }
    return true;
}

int main(){

    while(getline(cin,str)){
        output=str;
        string sub;
        for(int i=0;i<=str.length();i++){
            if(check()){
                cout<<output<<endl;
                break;
            }
            else if(i<str.length()){
                sub=str.substr(0, i);
                reverse(sub.begin(), sub.end());
                output=str+sub;
            }
        }
    }
return 0;
}
