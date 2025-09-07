# include <bits/stdc++.h>

using namespace std;

int a[50];

int calculate(int n){
    if(n<=1) return a[n];
    int ans;
    if(a[n] == 0){
        ans = calculate(n-1)+calculate(n-2);
        a[n]=ans;
    }
    else ans = a[n];
    return ans;
}

int main(){
    int n;
    a[0] = 1;
    a[1] = 2;
    while(cin >> n && n != 0){
        cout << calculate(n-1)<<endl;
    }
}
