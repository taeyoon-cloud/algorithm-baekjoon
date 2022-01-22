// 1072��: ����
#include <iostream>


#define INF 1000000000
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long X, Y, Z; // ����Ƚ�� X, �̱�Ƚ�� Y, �·� Z

	cin >> X >> Y;
	Z = ((long double)Y / (long double)X) * 100;

	long long left = 1;
	long long right = INF;
	long long mid; // ���� ��
	long long value; // Z�� �·��� ���ϱ� ���� ����
	long long answer = INF; // �·��� ���ϱ� ���� �ּ����� ���Ӽ��� �����ϴ� ����
	while (left <= right) {
		mid = (left + right) / 2;
		value = ((long double)(Y + mid) / (long double)(X + mid)) * 100; // long double�������
		if (value > Z) { // ���� value�� ���� �·� Z���� Ŭ ��� �� ���� mid��(�� �ؾ��ϴ� ������ ��)�� ã�� ���� ���� ���� ���δ�.
			if (answer > mid) answer = mid; // answer�� �ּ����� ���Ӽ��� ������Ʈ
			right = mid - 1;
		}
		else left = mid + 1; // ���� value�� ���� �·� Z ������ ��� ���Ӽ��� �÷��� ��(��� �� �۾������� ����)

	}
	if (Z >= 99) cout << -1 << "\n"; // Z�� ���� ������ �ʴ� ������ ����? -> 99%���� 100%����� ��츸 �Ұ���!
	else cout << answer << "\n";
	
	return 0;
}