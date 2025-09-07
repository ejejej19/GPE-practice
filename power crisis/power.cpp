# include <bits/stdc++.h>

using namespace std;

int n;

bool calculate(int m){
    vector<int> region;
    for(int i=0;i<n;i++){
        region.push_back(i+1);
    }
    int i=0;
    while(region.size()>1){
        region.erase(region.begin()+i);
        i+=m-1;
        while(i>=region.size()){
            i-=region.size();
        }
    }
    if(region[0]==13) return true;
    return false;
}

int main(){

    while(cin>>n&&n!=0){
        int m=1;
        while(m<=n){
            if(calculate(m)) break;
            m++;
        }
        cout<<m<<endl;
    }
    return 0;
}
