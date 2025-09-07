#define _USE_MATH_DEFINES
# include <bits/stdc++.h>

using namespace std;

int main(){
    float a;
    ifstream in("input.txt");
    ofstream out("output.txt");
    while(in >> a){
        float ans1, ans2, ans3;
        ans1 = a*a*(1 - M_PI/6 - sqrt(3)/4);
        ans2 = a*a*(1 - M_PI/4) - ans1 * 2;
        ans3 = a*a - ans1 * 4 - ans2 * 4;
        ans1*=4;
        ans2*=4;
        out << fixed << setprecision(3);
        out << ans3 << " " << ans2 << " " << ans1 << endl;
    }
    in.close();
    out.close();
    return 0;
}
