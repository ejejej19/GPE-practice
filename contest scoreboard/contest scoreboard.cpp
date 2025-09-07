# include <bits/stdc++.h>

using namespace std;

struct T{
    int id, cnt, t, e[10]; // id, num of solved, penalty, error time of each problem
    bool join;
};

bool cmp(T a,T b){
    if(a.cnt!=b.cnt) return a.cnt>b.cnt;
    if(a.t!=b.t) return a.t<b.t;
    return a.id<b.id;
}

int main(){
    int n;
    bool first=true;
    cin>>n;
    stringstream ss;
    while(n--){
        int id,p,t;
        char L;
        T input[102];
        for(int i=0;i<102;i++){
            input[i].id=i;
            input[i].t=0;
            input[i].cnt=0;
            input[i].join=false;
            memset(input[i].e,0,sizeof(input[i].e));
        }
        string newline,temp;

        if(first){
            getline(cin,newline);
            getline(cin,newline);
            first=false;
        }
        else  puts("");
        while(getline(cin,temp)&&temp!=""){
            ss.clear();
            ss.str(temp);
            ss>>id>>p>>t>>L;
            input[id].join=true;
            if(input[id].e[p]!=-1){
                if(L=='C'){
                    input[id].t+=t;
                    input[id].t+=input[id].e[p]*20;
                    input[id].cnt++;
                    input[id].e[p]=-1; // id solve p
                }
                else if(L=='I'){
                    input[id].e[p]++;
                }
            }
        }
        sort(input,input+102,cmp);
        for(int i=0;i<102;i++){
            if(input[i].join){
                cout<<input[i].id<<" "<<input[i].cnt<<" "<<input[i].t<<endl;
            }
        }

    }
}
