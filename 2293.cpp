// 2293��: ���� 1
#include <iostream>
#include <algorithm>

using namespace std;

// ���� ���� n, ��ġ�� �� k
int n, k;
// dp ���̺�
int dp[10001];
// �������� ��ġ�� �����ϴ� �迭
int coins[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//fill(coins, coins + 101, 10001);


	// ���� ����, ��ġ�� �� �Է�
	cin >> n >> k;

	// coins����Ʈ�� ���� ���� �Է�
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		coins[i] = x;
	}

	dp[0] = 1;

	// ���� �������� for���� ������ Ȯ����
	for (int i = 0; i < n; i++) {
		for (int j = coins[i]; j <= k; j++) {
			dp[j] += dp[j - coins[i]];
		}
	}

	cout << dp[k];

	


	
}