# include <bits/stdc++.h>

using namespace std;

int h,w;

void dfs(string lan[], int i, int j){
    char target=lan[i][j];
    lan[i][j]='.';
    if(i>0&&lan[i-1][j]==target){
        dfs(lan,i-1,j);
        lan[i-1][j]='.';
    }
    if(i<h-1&&lan[i+1][j]==target){
        dfs(lan,i+1,j);
        lan[i+1][j]='.';
    }
    if(j>0&&lan[i][j-1]==target){
        dfs(lan,i,j-1);
        lan[i][j-1]='.';
    }
    if(j<w-1&&lan[i][j+1]==target){
        dfs(lan,i,j+1);
        lan[i][j+1]='.';
    }
}

bool cmp(pair<char,int> a, pair<char,int> b){
    if(a.second!=b.second) return a.second>b.second;
    return a.first<b.first; // 根據字母順序
}

int main(){
    int n,t=1;
    cin>>n;
    while(n--){

        cin>>h>>w;
        string lan[20];
        for(int i=0;i<h;i++){
            cin>>lan[i];
        }
        map<char,int> cnt;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(lan[i][j]!='.'){
                    cnt[lan[i][j]]++;
                    dfs(lan,i,j);
                }
            }
        }

        vector<pair<char, int>> result(cnt.begin(), cnt.end()); // 轉換成可以比較好做compare的vector
        sort(result.begin(), result.end(), cmp);
        cout<<"World #"<<t<<endl;
        t++;
        for(auto &i : result){
            cout<<i.first<<": "<<i.second<<endl;
        }
    }
}
