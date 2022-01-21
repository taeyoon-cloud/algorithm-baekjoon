// 2792��: ���� ����
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> vec;
int N, M; // ���̵��� �� N, ������ �� M

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	int num;
	for (int i = 0; i < M; i++) {
		cin >> num;
		vec.push_back(num);
	}

	int left, right, mid;
	left = 1;
	right = *max_element(vec.begin(), vec.end()); // �Է� ���� ������ �� �� �ִ�


	while (left <= right) {
		int cnt = 0; // mid������ ����ϴ� ��ü �л� ��
		int mid = (left + right) / 2;
		for (int i = 0; i < M; i++) {
			int a = vec[i] / mid; // ������ ������ mid������ �����ش�.
			int b = vec[i] % mid; // ������ ������ mid������ ���� �� �������� �ʴ� ������
			cnt += a; // ����ϴ� ��ü �л����� �����ش�.
			if (b) cnt++; // ���� ������ �� ������ �������� �ʴ´ٸ� «ó���� �л� �Ѹ� �߰�
		}

		if (cnt > N) //���� �л��� ���� N���� Ŭ ��쿡�� ����� �ش� �������� ������ų �� ���� ��
					 // ��, �������� ������ �Ѵ�.
			left = mid + 1;
		else // ���� �л��� ���� N���� �۰ų� ���� ��쿡�� �� ������ ������ �� �ִ� ���̴�.
			 // �������� �� ���� �� ���� �� �����غ���.
			right = mid - 1;


	}

	cout << left << "\n";
	return 0;
}