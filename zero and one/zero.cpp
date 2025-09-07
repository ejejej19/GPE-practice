# include <bits/stdc++.h>

using namespace std;

void check(string str, int i, int j){
    for(int k=i+1;k<=j;k++){
        if(str[k]!=str[i]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}

int main(){
    string str;
    getline(cin,str);
    int n,t=1;
    while(str!="" ){
        cin>>n;
        int i,j;
        cout<<"Case "<<t<<":"<<endl;
        while(n--){
            cin>>i>>j;
            check(str,min(i,j),max(i,j));
        }
        cin.ignore();
        getline(cin,str);
        t++;
    }
}
