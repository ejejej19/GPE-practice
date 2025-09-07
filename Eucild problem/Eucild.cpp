# include <bits/stdc++.h>

using namespace std;

int main(){
    long long  x1,x2,y1,y2,a,b,temp;
    while(cin>>a>>b){
        bool flag=true;
        x1=1; y1=0;
        x2=0; y2=1;
        while(a%b!=0){
            if(flag) {
                x1 -= a/b*x2;
                y1 -= a/b*y2;
                flag=false;
            } else {
                x2 -= a/b*x1;
                y2 -= a/b*y1;
                flag=true;
            }
            temp = a;
            a = b;
            b = temp%b;
        }
        if(flag) cout<<x2<<" "<<y2<<" "<<b<<endl;
        else cout<<x1<<" "<<y1<<" "<<b<<endl;
    }
}
