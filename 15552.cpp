// 15552��: ���� A + B
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T; // �׽�Ʈ ���̽�
	cin >> T;
	int a, b;
	while (T--) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}