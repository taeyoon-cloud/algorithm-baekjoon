// 10828��: ����
#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> s; // ����
int N; // ����� ��
string order; // ���
int num; // push ����� �� �� push�� ��

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