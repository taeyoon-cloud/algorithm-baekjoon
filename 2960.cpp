// 2960��: �����佺�׳׽��� ü
#include <iostream>

using namespace std;

int arr[1001]; // �ش� index�� �������� ���θ� �����ϴ� �迭
int cnt; // ��� �������� Ȯ���ϱ� ���� ����
int num; // ���� ��
int n, k; // �Է°� n, k

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) {
			arr[i] = 1;
			//cout << i << "\n";
			cnt++;
			if (cnt == k) {
				num = i;
				break;
			}
			int j = 2;
			while (i * j <= n) {
				if (arr[i * j] == 0) {
					arr[i * j] = 1;
					//cout << i*j << "\n";
					cnt++;
					j++;
					if (cnt == k) {
						num = i * (j - 1);
						break;
					}
				}
				else
					j++;
			}
		}
	}

	cout << num;
}