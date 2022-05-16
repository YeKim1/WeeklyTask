#include <iostream>
#include <map>
using namespace std;

string Atoa(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] -= 'A' - 'a';
	}

	return s;
}

int main() {

	int N;
	string s;

	while (true) {
		map<string, int> m;

		cin >> N;

		if (N == 0) break;

		string* str = new string[N];

		for (int i = 0; i < N; i++) {
			cin >> s;
			str[i] = s;
			m.insert({ Atoa(s), i });
		}

		for (map<string, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
			cout << iter->first << " " << iter->second << endl;
		}
	}
}