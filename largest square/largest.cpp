# include <bits/stdc++.h>

using namespace std;

int m, n, q, x, y;

bool check(string arr[], int i){
    char target = arr[x][y];
    if(i > x || i > y || x + i > m - 1 || y + i > n - 1) return false;
    for(int j = -i; j <= i; j++){
        for(int k = -i; k <= i; k++){
            if(arr[x+j][y+k] != target) return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n >> q;
        string arr[m];
        cout << m << " " << n << " " << q << endl;
        for(int i = 0; i < m; i++){
            cin >> arr[i];
        }
        while(q--){
            cin >> x >> y;
            int i = 1;
            while(check(arr, i)){
                i++;
            }
            cout << i * 2 - 1 << endl;
        }
    }
}