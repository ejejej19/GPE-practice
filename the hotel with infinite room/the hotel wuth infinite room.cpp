#include <iostream>

using namespace std;

int sum(int n, int t){
    int result = 0;
    for(int i = 0; i <= t; i++){
        result += n;
        result += i;
    }
    return result;
}

int find(int s, int d){
    for(int i = 0; i < d; i++){
        if(sum(s, i) >= d) return s + i; 
    }
    return 0;
}

int main(){
    int s, d;
    while(cin >> s >> d){
        cout << find(s, d) << endl;
    }
    return 0; 
}