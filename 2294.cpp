// 2293��: ���� 2
#include <iostream>
#include <algorithm>
#define INF 123456

using namespace std;

// ���� ���� n, ��ġ�� �� k
int n, k;
// dp ���̺�
int dp[10001];
// ���� ���� �����ϴ� �迭
int coins[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(dp, dp + 10001, INF);
	// �ּڰ��� �����ϴ� ���̹Ƿ� ��� dp ���̺� ���� �ִ����� �ʱ�ȭ

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		coins[i] = x;
	}

	// 0�� ����� ������ �����Ƿ� 0���� �ʱ�ȭ
	dp[0] = 0;

	for (int i = 0; i < n; i++) {
		for (int j = coins[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - coins[i]] + 1);
		}
	}

	// dp ���̺� ���� ó���� �ʱ�ȭ�ߴ� INF �״�ζ�� ����� �����Ƿ� -1 ���
	if (dp[k] == INF)
		cout << -1 << "\n";
	else
		cout << dp[k] << "\n";

	return 0;
}