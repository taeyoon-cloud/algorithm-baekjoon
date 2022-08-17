// 12865번: 평범한 배낭
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 물품의 수 n, 버틸 수 있는 무게 k
int n, k;
// dp 테이블
int dp[101][100001];
// 각 물품당 가치를 저장하는 벡터
vector<pair<int, int>> things;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	// 0번째 물건에는 0, 0 삽입
	things.push_back({ 0, 0 });

	for (int i = 0; i < n; i++) {
		// 물품의 무게 w, 가치 v
		int w, v;
		cin >> w >> v;
		things.push_back({ w, v });
	}

	sort(things.begin(), things.end());


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j - things[i].first >= 0) // 인덱스가 0 이상일 경우에만 갱신
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - things[i].first] + things[i].second);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	
	cout << dp[n][k];
}