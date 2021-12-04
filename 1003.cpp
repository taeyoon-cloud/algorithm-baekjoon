// 1003번: 피보나치 함수
#include <cstdio>

int dp[42][2]; //0이 호출되는 횟수와 1이 호출되는 횟수를 저장하기 위한 배열
int test; // 테스트 케이스

int main() {
	scanf("%d", &test);
	while (test--) {
		int num;
		scanf("%d", &num);

		//기본 조건
		dp[0][0] = 1; // 0을 만들기 위해 0이 호출되는 횟수 -> 1번
		dp[0][1] = 0; // 0을 만들기 위해 1이 호출되는 횟수 -> 0번
		dp[1][0] = 0; // 1을 만들기 위해 0이 호출되는 횟수 -> 0번
		dp[1][1] = 1; // 1을 만들기 위해 1이 호출되는 횟수 -> 1번

		//만약 둘 중에 하나라도 1보다 크면 이미 저장되어 있는 배열에서 바로 출력
		if (dp[num][1] > 0 || dp[num][0] > 0)
			printf("%d %d\n", dp[num][0], dp[num][1]);
		else {
			for (int i = 2; i <= num; i++) {
				dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
				dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
			}
			printf("%d %d\n", dp[num][0], dp[num][1]);
		}
	}
	return 0;
}