#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string& paths) {
	vector<string> result;
	int start = 0;
	int found;
	while ((found = paths.find('\\', start)) != -1) {
		result.push_back(paths.substr(start, found - start)); // 從start開始存found-start個字元
		start = found + 1; // 跳過'\'
	}
	result.push_back(paths.substr(start)); // 存剩下的全部字元
	return result;
}

bool cmp(const string& a, const string& b) {
    vector<string> splitA = split(a);
    vector<string> splitB = split(b);
    int sizeA = splitA.size();
    int sizeB = splitB.size();
    int len = min(sizeA,sizeB);
    int i = 0;
    for(; i < len; i++){
        if(splitA[i] == splitB[i]) continue; // 前i項相同
        else break;
    }
    if (i != len - 1) {
        return splitA[i].size() < splitB[i].size(); // 深度較淺的目錄優先
    }
    return a < b; // 若深度相同，則按照字典序排序
}

int main() {
	int n;
	cin >> n;
	vector<string> paths(n);

	for (int i = 0; i < n; i++) {
		cin >> paths[i];
	}

	sort(paths.begin(), paths.end(), cmp);
	vector<vector<string>> dire(n);
	size_t start = 0;
	for (const string& path : paths) {
		dire[start] = split(path);
		start++;
	}

	for (int i = 0; i < dire[0].size(); i++) {
		for (int j = 0 ; j < i; j++) {
			cout << " ";
		}
		cout << dire[0][i] << endl;
	}

	for (int i = 1; i < n; i++) {
		int len = min(dire[i].size(), dire[i - 1].size());
		int j = 0;
		for (; j < len; j++) {
			if (dire[i][j] == dire[i - 1][j]) {
				continue;
			}
			else break;
		}
		for(; j < dire[i].size(); j++){
			int k = 0;
			for (; k < j; k++) {
				cout << " ";
			}
			cout << dire[i][j] << endl;
		}
	}
	return 0;
}
