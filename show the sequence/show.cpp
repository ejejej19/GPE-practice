# include <bits/stdc++.h>

using namespace std;

long long a[55];

void calculate(string str){
    int sign=1,m=0,i;
    char pos;
    for(i=1;i<str.length();i++){ //i=1用來跳過[
        if(str[i]=='-') sign=-1;
        else if(str[i]>='0'&&str[i]<='9'){
            m*=10;
            m+=str[i]-'0';
        }
        else{
            pos=str[i];
            break;
        }
    }
    m*=sign;

    if(pos=='+'){
        calculate(str.substr(i+1));
        a[0]=m;
        for(i=1;i<55;i++){
            a[i]+=a[i-1];
        }
    }
    else if(pos=='*'){
        calculate(str.substr(i+1));
        a[0]*=m;
        for(i=1;i<55;i++){
            a[i]*=a[i-1];
        }
    }
    else{
        for(i=0;i<55;i++){
            a[i]=m;
        }
    }
}

int main(){
    string str;
    int n;
    while(cin>>str>>n){
        memset(a,0,sizeof(a));
        calculate(str);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
