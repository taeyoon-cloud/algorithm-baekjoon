// 1463번: 1로 만들기
#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000001]; // dp테이블

int main() {
	int n; // 주어진 정수 n
	cin >> n;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		// 나누어 떨어지지 않으면 dp[i-1] + 1 그대로 입력
		if ((i % 2) != 0 && (i % 3) != 0)
			continue;
		// 6으로 나눠지는 경우 2와 3으로 나눈 값의 최솟값 + 1
		// 30의 경우 이 조건이 없으면 잘못된 값이 나옴
		// 조건 없는 경우: 30 -> 15 -> 5 -> 4 -> 2 -> 1 답:5 (잘못된 답)
		// 조건 있는 경우: 30 -> 10 -> 9 -> 3 -> 1 답:4 (정답)
		else if ((i % 2) == 0 && (i % 3) == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}


		// 2로만 나누어 떨어지는 경우
		else if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		// 3으로만 나누어 떨어지는 경우
		else if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
		//cout << i << "번째: " << dp[i] << "\n";
	}

	cout << dp[n] << "\n";

}