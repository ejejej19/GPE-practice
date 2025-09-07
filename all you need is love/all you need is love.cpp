#include <bits/stdc++.h>

using namespace std;

void compute(string& s1, string& s2){
    int len1 = s1.length();
    int len2 = s2.length();
    int num1 = 0;
    int num2 = 0;
    for(int i = 0; i < len1; i++){
        num1 *= 2;
        num1 += s1[i] - '0';
    }
    cout << "num1 = " << num1 << endl;
    for(int i = 0; i < len2; i++){
        num2 *= 2;
        num2 += s2[i] - '0';
    }
    cout << "num2 = " << num2 << endl;
    if(gcd(num1, num2) != 1) cout << "All you need is love!" << endl;
    else cout << "Love is not all you need!" << endl;
}

int main(){
    int n;
    cin >> n;
    while(n){
        string s1, s2;
        cin >> s1 >> s2;
        compute(s1, s2);
        n--;
    }
    return 0;
}