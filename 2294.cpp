// 2293번: 동전 2
#include <iostream>
#include <algorithm>
#define INF 123456

using namespace std;

// 동전 종류 n, 가치의 합 k
int n, k;
// dp 테이블
int dp[10001];
// 동전 종류 저장하는 배열
int coins[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(dp, dp + 10001, INF);
	// 최솟값을 갱신하는 것이므로 모든 dp 테이블 값을 최댓값으로 초기화

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		coins[i] = x;
	}

	// 0을 만드는 동전은 없으므로 0으로 초기화
	dp[0] = 0;

	for (int i = 0; i < n; i++) {
		for (int j = coins[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - coins[i]] + 1);
		}
	}

	// dp 테이블 값이 처음에 초기화했던 INF 그대로라면 만들수 없으므로 -1 출력
	if (dp[k] == INF)
		cout << -1 << "\n";
	else
		cout << dp[k] << "\n";

	return 0;
}