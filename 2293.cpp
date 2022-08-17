// 2293번: 동전 1
#include <iostream>
#include <algorithm>

using namespace std;

// 동전 종류 n, 가치의 합 k
int n, k;
// dp 테이블
int dp[10001];
// 동전들의 가치를 저장하는 배열
int coins[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//fill(coins, coins + 101, 10001);


	// 동전 종류, 가치의 합 입력
	cin >> n >> k;

	// coins리스트에 동전 종류 입력
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		coins[i] = x;
	}

	dp[0] = 1;

	// 동전 종류마다 for문을 돌려서 확인함
	for (int i = 0; i < n; i++) {
		for (int j = coins[i]; j <= k; j++) {
			dp[j] += dp[j - coins[i]];
		}
	}

	cout << dp[k];

	


	
}