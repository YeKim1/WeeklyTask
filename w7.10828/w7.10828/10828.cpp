#include <iostream>
using namespace std;

class Stack {
private:
	int* arr = new int[10000];
	int topIdx = -1;
public:
	Stack() {}
	void push(int X) {
		arr[++topIdx] = X;
	}
	void pop() {
		if (topIdx == -1) cout << "-1" << endl;
		else cout << arr[topIdx--] << endl;
	}
	void empty() {
		if (topIdx == -1) cout << "1" << endl;
		else cout << "0" << endl;
	}
	void top() {
		if (topIdx == -1) cout << "-1" << endl;
		else cout << arr[topIdx] << endl;
	}
	void size() {
		cout << topIdx + 1 << endl;
	}
};

int main() {
	int N, X;
	cin >> N;

	Stack* S = new Stack();

	string s;

	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == "push") {
			cin >> X;
			S->push(X);
		}
		else if (s == "pop") {
			S->pop();
		}
		else if (s == "size") {
			S->size();
		}
		else if (s == "empty") {
			S->empty();
		}
		else if (s == "top") {
			S->top();
		}
	}
}