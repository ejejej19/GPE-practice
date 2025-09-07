# include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    map<string,int> dic;

    string str,temp;
    stringstream ss;
    int v,r=0;
    for(int i=0;i<n;i++){
        cin>>str>>v;
        dic[str]=v;
    }

    while(m--){
        while(getline(cin,str)&&str!="."){
            ss.clear();
            ss.str(str);
            while(ss>>temp){
                r+=dic[temp];
            }
        }
        cout<<r<<endl;
        r=0;
    }
}
