#include <iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	string file_Name;
	string ans;

	for (int i = 0; i < N; i++) {
		cin >> file_Name;

		if (i == 0) ans = file_Name;
		else {
			for (int j = 0; j < file_Name.size(); j++) {
				if (file_Name[j] != ans[j]) ans[j] = '?';
			}
		}
	}

	cout << ans;
}