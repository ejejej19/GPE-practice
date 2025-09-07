# include <bits/stdc++.h>

using namespace std;

long long trans(string str){
    int len=str.length();
    long long n=1;
    long long r=0;
    for(int i=len-1;i>=0;i--){
        if(str[i]=='1') r+=n;
        n*=2;
    }
    return r;
}

long long calculate(long long num1, long long num2){
    long long temp;
    while(num1%num2!=0){
        temp=num1;
        num1=num2;
        num2=temp%num2;
    }
    return num2;
}

int main(){
    int n,t=1;
    cin>>n;
    cin.ignore();
    while(n--){
        string str1,str2;
        getline(cin,str1);
        getline(cin,str2);
        long long num1=trans(str1);
        long long num2=trans(str2);
        //cout<<num1<<" "<<num2<<endl;
        long long g=calculate(num1,num2);
        if(g==1) cout<<"Pair #"<<t<<": Love is not all you need!"<<endl;
        else cout<<"Pair #"<<t<<": All you need is love!"<<endl;
        t++;
    }
}
