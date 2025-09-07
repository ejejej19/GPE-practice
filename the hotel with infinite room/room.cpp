# include <bits/stdc++.h>

using namespace std;

int main(){

    long long s,d;
    while(cin>>s){
        cin>>d;
        long long t=s;
        long long day=s;
        while(day<d){
            t++;
            day+=t;
        }
        cout<<t<<endl;
    }
    return 0;
}
