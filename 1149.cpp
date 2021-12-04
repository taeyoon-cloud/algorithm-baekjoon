// 1149번: RGB거리
#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][4]; // 집을 칠하는 비용을 저장하는 배열
int cost[4]; // 반복문이 돌때 각각의 집을 칠하는 비용을 저장하는 배열

int main() {
	int N; // 집의 수
	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		cin >> cost[1] >> cost[2] >> cost[3];
		dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + cost[1];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + cost[2];
		dp[i][3] = min(dp[i - 1][1], dp[i - 1][2]) + cost[3];
	}

	cout << min(dp[N][1], min(dp[N][2], dp[N][3]));
	return 0;
}