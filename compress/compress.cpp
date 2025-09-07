# include <bits/stdc++.h>

using namespace std;

int main(){
    set<string> text; // 紀錄出現過的word
    vector<string> list;
    string a, word;
    int i;
    while(getline(cin, a), a!="0"){ // a是包含空格的一整行輸入
		word.clear();
		for(i=0; i < a.size(); i++){
			if(isalpha(a[i])){ // 把a切成合理的word
				word.clear();
				word.push_back(a[i]);
				while(i++ < a.size()){
					if(isalpha(a[i])){
						word.push_back(a[i]);
					}
					else{
						i--;
						break;
					}
				}
				if(text.insert(word).second){ // word沒出現過
					list.push_back(word);
				}
				else{
					list.erase(find(list.begin(), list.end(), word));
					list.push_back(word);
				}
				cout << word;
			}
			else if(isdigit(a[i])){ // 數字去list找對應的word
				int x = a[i]-'0';
				while(i++ < a.size()){
					if(isdigit(a[i])){
						x *= 10;
						x += a[i]-'0';
					}
					else{
						i--;
						break;
					}
				}
				word = *(list.end() - x);
				list.erase(list.end() - x);
				list.push_back(word);
				cout << word;				
			}
			else cout << a[i];
		}
		cout << endl;
	}
}