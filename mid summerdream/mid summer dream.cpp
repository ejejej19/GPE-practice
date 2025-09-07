#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	ifstream in("input.txt");
	ofstream out("output.txt");

	int n;
	while (in >> n) {
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		in >> num[i];
	}
	int result = 0;
	sort(num.begin(), num.end());
	int mid = num[n / 2];
	int cnt;
	int p;
	if (n % 2 == 1){
        p=1;
        cnt = count(num.begin(), num.end(),mid);
        out << mid << " " << cnt << " " << p<< endl;
	}
	else{
        p=num[n/2]-num[n/2-1]+1;
        cnt = count(num.begin(), num.end(),num[n/2-1]);
        out << num[n/2-1] << " " << cnt << " " << p<< endl;
	}
	}
	in.close();
	out.close();
	return 0;
}
