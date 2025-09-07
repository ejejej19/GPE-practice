# include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    string a;
    while(cin >> a){ 
        // cout << "read " << a << endl;
        int len_a = a.length();
        string ans;
        string sub;
        bool accept = false;
        for(int i = 0; i < len_a; i++){
            bool is_palindrome = true;
            for (int j = 0; i + j < len_a; j++) {
                if (a[i + j] != a[len_a - 1 - j]) {
                    is_palindrome = false;
                    break;
                }
            }
            if (is_palindrome) {
                sub = a.substr(0, i);
                reverse(sub.begin(), sub.end());
                ans = a + sub;
                accept = true;
                break;
            }
        }
        if (!accept) {
            sub = a;
            reverse(sub.begin(), sub.end());
            ans = a + sub;
        }
        cout << ans << endl;
    }
    return 0;
}