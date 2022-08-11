// 10973��: ���� ����
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n; // 1~n������ ����
vector<int> arr; // �־����� ����
vector<int> temp_arr; // ���� Ȯ���� ���� �ӽ� ����

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	for (int i = 1; i <= n; i++)
		temp_arr.push_back(i);

	// ���� �Է��� ������ ���� ������ �Է��� ù��° �����̶��
	// -1 ��� �� ����
	if (temp_arr == arr) {
		cout << -1 << "\n";
		return 0;
	}

	// ���� ���� ���ϱ�
	prev_permutation(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

}