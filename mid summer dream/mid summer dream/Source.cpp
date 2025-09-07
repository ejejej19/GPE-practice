#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	// ifstream in;
	// ofstream out;
	// in.open("input.txt");
	// out.open("output.txt");
	// if (!out) {
	// 	cout << "Error opening output file!" << endl;
	// 	return 1;
	// }
	// if (!in) {
	// 	cout << "Error opening input file!" << endl;
	// 	return 1;
	// }

	int n;
	while (cin >> n) {
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int result = 0;
	sort(num.begin(), num.end());
	int mid = num[n / 2];
	int cnt = count_if(num.begin(), num.end(), [mid](int i) {return i == mid; });
	cout << mid << " " << cnt << " ";
	if (n % 2 == 0) cout << "1" << endl;
	else cout << "0" << endl;	
	}
	//in.close();
	//out.close();
	return 0;
}