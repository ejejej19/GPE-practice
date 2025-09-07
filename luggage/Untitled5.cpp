# include <bits/stdc++.h>

using namespace std;

int main(){
    int m;
    cin >> m;
    int i, temp, sum, total;
    string n;
    getline(cin, n);
    while(m--){
        vector<int> weight;
        string a;
        getline(cin, a);
        i = 0;
        sum = 0;
        temp = 0;
        total = 0;
        //cout <<"a = " <<a<<endl;
        //cout << "a_len = " << a.length()<<endl;
        while(i <= a.length()){
            if(a[i]<'0' || a[i] >'9' || i == a.length()){
                // cout<<"temp = "<< temp<<endl;
                weight.push_back(temp);
                sum += temp;
                temp = 0;
            }
            else{
                temp *= 10;
                temp += a[i] - '0';
            }
            i++;
        }
        //cout <<"sum = " <<sum <<endl;
        if(sum % 2){
            cout << "NO" << endl;
        }
        else{
            sum /= 2;
            sort(weight.begin(), weight.end());
            for(int i = weight.size() - 1; i >= 0; i--){
                total += weight[i];
                if(total > sum){
                    total -= weight[i];
                }
                else if(total == sum){
                    cout << "YES" << endl;
                    break;
                }
                else if(i == 0){
                    cout << "NO" << endl;
                }
            }
        }
    }
}
