// 11845번: 큐
#include <iostream>
#include <string>
#include <queue>
using namespace std;

queue<int> q;
int N; // 명령의 수
string order; // 명령을 저장하는 변수
int num; // push할때의 숫자를 저장하는 변수

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