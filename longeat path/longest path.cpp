# include <bits/stdc++.h>

using namespace std;

int max_len, fin;
vector<int> v;
int path(const vector<vector<int>>& graph, int m, vector<int>& dp, vector<int>& end){
    if(dp[m] != -1) return dp[m]; // 已經算過
    int max_len = 0;
    fin = m;
    for(auto i : graph[m]){
        int len = path(graph, i, dp, end);
        if(len + 1 > max_len){
            max_len = len + 1;
            fin = end[i];
        }
    }
    dp[m] = max_len;
    end[m] = fin;
    return dp[m];
}

int main(){
    int n, m, i = 1;
    cin >> n;
    while(n){
        cin >> m;
        vector<vector<int>> visit(n + 1);
        vector<int> dp(n + 1, -1); // length of directed path
        vector<int> end(n + 1); // end[i] = 從i開始的longest path的結尾
        max_len = 0;
        v.clear();
        int p, q;
        cin >> p >> q;
        while(p && q){
            visit[p].push_back(q);
            cin >> p >> q;
        }
        cout << "Case " << i << ": The longest path from " << m << " has length " << path(visit, m, dp, end)
             <<", finishing at " << end[m] << "." << endl;
        i++;
        cin >> n ;
    }
}