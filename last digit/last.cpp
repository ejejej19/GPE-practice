# include <bits/stdc++.h>

using namespace std;

int compute(int n, int p){
    int r=1;
    n%=10;
    while(p>0){
        if(p%2==1)r*=n;
        p/=2;
        n=(n*n)%10;
        r%=10;
    }
    return r;
}

int main(){
    string n;
    cin>>n;
    int table[100];
    table[0]=0;
    for(int i=1;i<100;i++){
        table[i]=table[i-1]+compute(i%10,i);
        table[i]%=10;
    }
    while(n!="0"){
        int num, len=n.length();
        if(len>=2) num=(n[len-2]-'0')*10+n[len-1]-'0';
        else if(len==1) num=n[len-1]-'0';
        cout <<table[num]<<endl;
        cin>>n;
    }
}
