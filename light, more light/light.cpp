# include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    while(cin>>n && n!=0){
        long long half = sqrt(n);
        if(half*half==n) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
