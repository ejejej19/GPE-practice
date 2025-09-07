#include <iostream>
#include<algorithm>

using namespace std;

int power(int n){
    int result = 1;
    int last = n % 10;
    for(int i = 0; i < n; i++){
        result *= last;
        result %= 10;
    }
    return result;
}

int main(){
    int n;
    while(cin >> n && n != 0){      
        int result = 0;
        for(int i = 1; i <= n; i++){
            result += power(i);
        }
        cout << result % 10 << endl;
    }
    return 0;    
}