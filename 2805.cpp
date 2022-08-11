//2805��: ���� �ڸ���
#include <iostream>

using namespace std;

long long trees[1000001]; // ������ ���̵��� �����ϴ� �迭
long long n, m; // ������ �� n, ������ ���������� ������ ���� m
long long h; // ���ܱ��� ���� h


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long max = 0; // �Էµ� ���� ���� �� �ִ��� �����ϴ� ����
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> trees[i];
		if (trees[i] > max) max = trees[i];
	}

	long long left, right, mid; // mid -> ���ܱ��� ����
	long long total; // �ڸ� ������ ������ ������ �����ϴ� ����(m�� ��)
	left = 1;
	right = max;
	long long answer = 0; // ���� �����ϴ� ����
	while (left <= right) {
		total = 0;
		mid = (left + right) / 2; // mid -> ���ܱ��� ����
		for (int i = 0; i < n; i++) {
			if (trees[i] - mid > 0) total += (trees[i] - mid);
			// ���ܱ��� ���̺��� ������ ���̰� ���� ��쿡�� ������ �� ����
		}
		if (total >= m) {
			// �ڸ� ���� ������ ������ ��ģ ���� m�̻��� ���
			// ���ܱ� ���̸� ������ ���ܱ� ������ �ִ��� ���غ���.
			if (answer < mid) answer = mid;
			// mid���� ���� ������ �� total�� m�̻��� ����̹Ƿ�
			// total�� m�̻��� ���� �����Ѵٸ� �� �� answer���� mid������ ���� �� �ۿ� ����.
			// �츮�� ������ �ִ��� ã�ƾ� �ϹǷ� answer < mid �϶�, answer = mid�� �ȴ�.
			left = mid + 1;
		}
		else right = mid - 1;
		// �ڸ� ���� ������ ������ m���� ���� ��� ���ܱ� ���̸� ���缭 ������ �� ���� �ڸ���.
	}

	cout << answer << "\n";
	return 0;

}