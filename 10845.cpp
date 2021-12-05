// 11845��: ť
#include <iostream>
#include <string>
#include <queue>
using namespace std;

queue<int> q;
int N; // ����� ��
string order; // ����� �����ϴ� ����
int num; // push�Ҷ��� ���ڸ� �����ϴ� ����

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	while (N--) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			q.push(num);
		}
		if (order == "pop") {
			if (q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << q.front() << "\n";
			q.pop();
		}
		if (order == "size")
			cout << q.size() << "\n";
		if (order == "empty") {
			cout << q.empty() << "\n";
		}
		if (order == "front") {
			if (q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << q.front() << "\n";
		}
		if (order == "back") {
			if (q.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << q.back() << "\n";
		}

	}
	return 0;

}