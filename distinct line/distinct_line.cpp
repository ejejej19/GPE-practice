# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n > 0){
        int m;
        cin >> m;    
        vector<pair<int, int>> points(m);

        for(int i = 0; i < m; i++){
            cin >> points[i].first >> points[i].second;
        }
        set<tuple<int, int, int>> line;
        for(int i = 0; i < m; i++){
            for(int j = i + 1; j < m; j++){
                int x1 = points[i].first, y1 = points[i].second;
                int x2 = points[j].first, y2 = points[j].second;
                // Ax + By + C = 0
                int A = y2 - y1;
                int B = x1 - x2;
                int C = x2 * y1 - x1 * y2;
                int g = gcd(gcd(A, B), C);
                if (g != 0) {
                    A /= g;
                    B /= g;
                    C /= g;
                }

                 if (A < 0 || (A == 0 && B < 0)) {
                    A = -A;
                    B = -B;
                    C = -C;
                }

                line.insert({A, B, C});
            }
        }
        cout << line.size() << endl;
        n--;
    } 
    return 0;
}