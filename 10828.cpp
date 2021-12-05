// 10828번: 스택
#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> s; // 스택
int N; // 명령의 수
string order; // 명령
int num; // push 명령을 할 때 push할 수

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	while (N--) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			s.push(num);
		}
		if (order == "pop") {
			if (s.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << s.top() << "\n";
			s.pop();
		}
		if (order == "size") {
			cout << s.size() << "\n";
		}
		if (order == "empty") {
			cout << s.empty() << "\n";
		}
		if (order == "top") {
			if (s.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << s.top() << "\n";
		}
	}

	return 0;
}