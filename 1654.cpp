	// 1620��: ���� �ڸ���
	#include <iostream>
	#include <vector>
	#include <algorithm>

	using namespace std;

	vector<long long> vec; // ������ ���̸� �Է¹ޱ� ���� ����(������ ���̰� 2^31-1�����̹Ƿ� long long ���)

	long long mid;
	
	int main() {

		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int K, N;
		cin >> K >> N;

		long long line; // �Է¹޴� ��������

		for (int i = 0; i < K; i++) {
			cin >> line;
			vec.push_back(line);
			
		}
	
		long long left = 1;
		long long right = *max_element(vec.begin(), vec.end()); // 2^31 -1�� �ص� ��

		while (left <= right) {
			int total = 0; // ���� ���� (N�� ���ƾ���)
			mid = (left + right) / 2;
			for (int i = 0; i < K; i++) {
				long long line = vec[i] / mid;
				total += line;
			}
		
			if (total >= N) left = mid + 1;
			// total�� N�̻��� ��� �ڸ��� ������ ���̸� �÷��� �Ѵ�.
			// N�� ���� ��쿡�� ������ �� ����� �����Ƿ� ������ ���̸� �÷�����.
			else right = mid - 1;
			// total�� N���� ���� ��쿡�� ������ ���̸� �ٿ����Ѵ�.
		}

		cout << right << "\n";

		return 0;

	}