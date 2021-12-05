// 15552번: 빠른 A + B
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T; // 테스트 케이스
	cin >> T;
	int a, b;
	while (T--) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}