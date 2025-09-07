# include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t=1;
    while(scanf("%d",&n)!=EOF){
        long long in[20],r=0,temp;
        for(int i=0;i<n;i++){
            cin>>in[i];
        }
        for(int i=0;i<n;i++){
            temp=1;
            for(int j=i;j<n;j++){
                temp*=in[j];
                if(temp>r) r=temp;
            }
        }
        cout<<"Case #"<<t<<": The maximum product is "<<r<<"."<<endl<<endl;
        t++;
    }
    return 0;
}
