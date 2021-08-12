#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count;
	string order;
	int num; // 입력하는 수
	int result = 0;
	cin >> count; // 명령 개수
	while (count--) {
		cin >> order;
		if (order == "add") {
			cin >> num;
			result |= (1 << num);
		}
		if (order == "remove") {
			cin >> num;
			result &= ~(1 << num);
		}
		if (order == "check") {
			cin >> num;
			if (result & (1 << num))
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		if (order == "toggle") {
			cin >> num;
			result ^= (1 << num);

		}
		if (order == "all") {
			result = (1 << 21) - 1;
		}
		if (order == "empty") {
			result = 0;
		}
	}

}