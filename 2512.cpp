// 2512��: ����
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> vec;
long long N, M; // ������ �� N, �� ���� M
int budget; // �� ������ ����

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> budget;
		vec.push_back(budget);
	}

	cin >> M;

	long long left = 1;
	long long right = *max_element(vec.begin(), vec.end());

	while (left <= right) {
		long long total = 0; // ������ ����(�ѿ��� M���Ͽ�����)
		long long mid = (left + right) / 2; // ���Ѿ�
		for (int i = 0; i < N; i++) {
			if (vec[i] >= mid) total += mid; // ���Ѿ� �̻��� ��û���� ���� ���Ѿ��� �ش�.
			else total += vec[i]; // ���Ѿ� �̸��� ��û���� ���� ��û�� �ݾ��� �״�� �ش�.
		}

		if (total > M) right = mid - 1;
		else left = mid + 1;
	}

	cout << right << "\n";
	return 0;

	
}