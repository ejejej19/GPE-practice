# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        vector<pair<int,int>> num(m);
        for(int i=0;i<m;i++){
            cin>>num[i].first>>num[i].second;
        }
        set<tuple<int,int,int>> line;
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                int x1=num[i].first, x2=num[j].first;
                int y1=num[i].second, y2=num[j].second;
                int a=y2-y1;
                int b=x1-x2;
                int c=x2*y1-x1*y2;
                int g=gcd(gcd(a,b),c);
                a/=g;
                b/=g;
                c/=g;
                if(a<0||(a==0&&b<0)){
                        a*=-1;
                        b*=-1;
                        c*=-1;
                    }
                line.insert({a,b,c});
            }
        }
        cout<<line.size()<<endl;
    }
    return 0;
}
