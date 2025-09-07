# include <bits/stdc++.h>

using namespace std;

int main(){
    int n,first=0;
    while(cin>>n){
        if(first){
            cout<<endl;
        }
        else first=1;
    cin.ignore();
    string str;
    map<string, int> cnt; // word, appearance time
    while(getline(cin,str)&&str!="EndOfText"){

        int t=0;
        string temp="";
        for(char i : str){
            if(isalpha(i)){
                temp += tolower(i);
            }
            else if(!temp.empty()){
                cnt[temp]++;
                temp="";
            }
        }
        if(!temp.empty()) cnt[temp]++;
        }
        vector<string> output;
        for(auto &i : cnt){
            if(i.second==n) output.push_back(i.first);
        }
        if(output.empty()){
            cout<<"There is no such word."<<endl;
            continue;
        }
        sort(output.begin(), output.end());
        for(auto i : output){
            cout<<i<<endl;
        }
       continue;
    }
    return 0;
    }
