# include <bits/stdc++.h>
# include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int LIS[n];
    int max_len = 1;
    for(int i = 0; i < n; i++){
        LIS[i] = 1; // 前i項的LIS
        for(int j = 0; j < i; j++){
            if(LIS[j] + 1 > LIS[i] && arr[j] < arr[i]){
                LIS[i] = LIS[j] + 1;
            }                   
        }
        if(LIS[i] > max_len) max_len = LIS[i];
    }
    cout << max_len << endl;
}