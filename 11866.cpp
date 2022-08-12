// 11866��: �似Ǫ�� ���� 0
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, k;
queue<int> q; // ����� �����ϴ� ��ť
vector<int> result; // ���� ����� �����ϴ� ����

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push(i);

	int temp = 1;
	while (q.size() != 1) {
		if (temp % k != 0) { // temp�� k�� �ƴ϶�� q�� front�� pop�ϰ� �ٽ� q�� ����
			int now = q.front();
			q.pop();
			q.push(now);
			temp++;
		}
		else { // temp�� k�϶��� ������ ����� ����
			int now = q.front();
			q.pop();
			result.push_back(now);
			temp = 1;
		}

	}
	// ������ ����� ����
	int now = q.front();
	result.push_back(now);

	cout << "<";
	for (int i = 0; i < n-1; i++) {
		cout << result[i] << ", ";
	}
	cout << result[n - 1] << ">";
}