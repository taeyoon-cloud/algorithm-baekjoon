//9095��: 1, 2, 3 ���ϱ�
#include <iostream>

using namespace std;

int add(int num) {
	if (num == 1) return 1;
	else if (num == 2) return 2;
	else if (num == 3) return 4;

	return add(num - 1) + add(num - 2) + add(num - 3); //�Ϲݽ�
}

int main() {
	int test; // �׽�Ʈ ���̽�
	cin >> test;
	while (test) {
		int n; // �� �׽�Ʈ ���̽��� �Է� ����
		cin >> n;
		cout << add(n) << endl;
		test--;
	}
	return 0;
}