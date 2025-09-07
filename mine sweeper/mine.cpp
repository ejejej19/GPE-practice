#include <bits/stdc++.h>

using namespace std;

int n,m;
int table[101][101];

void count(const vector<string>& field, int i,int j){
    int result =0;
    int up,down,left,right;
    up = max(i-1, 0);
    left = max(j-1,0);
    down=min(i+1,n-1);
    right=min(j+1,m-1);
    for(int k=up;k<=down;k++){
        for(int r=left;r<=right;r++){
                table[k][r]++;
        }
    }
}

int main(){
    int time=1;
    cin>>n>>m;
    while(n!=0){
        if(time >1) puts("");
        memset(table,0,sizeof(table));
        vector<string> field(n);
        for(int i=0;i<n;i++){
            cin>>field[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(field[i][j]=='*'){
                    count(field,i,j);
                }
            }
        }
        cout<<"Field #"<<time<<":"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(field[i][j]=='*'){
                    cout<<"*";
                }
                else{
                   cout<<table[i][j];
                }
            }
            cout<<endl;
        }
        time++;
        cin>>n>>m;
    }
    return 0;
}
