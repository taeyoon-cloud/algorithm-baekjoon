#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int num;
	int index = 5;
	int count = 0;
	cin >> num;
	while (index <= num) {
		count += num / index; // �Է¹��� ������ 5�� �ѹ� ���� Ƚ���� count�� ������
		index *= 5; // ���� 5�� 2�� �̻� �� ���� ��츦 ������ֱ� ���� index�� 5�� �����ְ� while���� �ٽ� ����
	}

	cout << count << endl;
	return 0;

}