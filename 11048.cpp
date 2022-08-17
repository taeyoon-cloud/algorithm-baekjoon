// 11048��: �̵��ϱ�
#include <iostream>
#include <algorithm>

using namespace std;

// ����, ���� ���� n, m
int n, m;
// dp ���̺�
int dp[1001][1001];
// �� ĭ�� ���� �� �����ϴ� 2���� ����Ʈ
int arr[1001][1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int x;
			cin >> x;
			arr[i][j] = x;
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int temp = max(dp[i - 1][j], max(dp[i][j - 1], dp[i-1][j-1]));
			//temp = max(temp, dp[i - 1][j - 1]);
			dp[i][j] = temp + arr[i][j];
		}
	}

	cout << dp[n][m];
}