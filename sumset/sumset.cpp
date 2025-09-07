# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;
    while(n){    
        bool find = false;
        int ans = INT_MIN;
        int arr[n];
        set<int> sum;
        int temp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
            sum.insert(arr[k] + arr[j] + arr[i]);
                }
            }
        }
        for(int i = 0; i < n; i++){
            if(sum.count(arr[i])){
                find = true;
                if(arr[i] > ans) ans = arr[i];
            }
        }
        if(find) cout << ans << endl;
        else cout << "no solution" << endl;
        cin >> n;
    }
    return 0;
}