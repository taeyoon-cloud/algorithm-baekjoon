// 2609��: �ִ������� �ּҰ����
#include <iostream>

using namespace std;
// gcd = greatest common divisor(�ִ�����)
int gcd(int a, int b) {
	if (a % b == 0) return b;

	return gcd(b, a % b);

}

int main() {
	int n1, n2; // �Է¹޴� �� 2��
	cin >> n1 >> n2;
	// ���� n1<n2�ϰ�� �� ���� �ٲ���(ū ���� ���� �;ߵ�)
	if (n1 < n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	cout << gcd(n1, n2) << endl; // �ִ�����
	cout << (n1 * n2) / gcd(n1, n2) << endl; // �ּҰ����
	return 0;
}