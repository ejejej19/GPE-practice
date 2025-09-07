# include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, len;
    cin >> n;
    while(n--){
        cin >> m;
        len = 0;
        vector<int> LIS(m);
        vector<vector<int>> ans;
        int seq[m];
        for(int i = 0; i < m; i++){
            cin >> seq[i];
        } 
        for(int i = 0; i < m; i++){
            LIS[i] = 1;
            int end = i;
            for(int j = 0; j < i; j++){
                if(LIS[j] + 1 > LIS[i] && seq[j] < seq[i]){
                    LIS[i] = LIS[j] + 1;
                    end = j;
                }
            }
            if(LIS[i] > len) len = LIS[i];
        }
        vector<int> temp;
        for(int i = 0; i < m; i++){
            if(LIS[i] == len){

            }
        }
    }
}