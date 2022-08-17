// 9251번: LCS
#include <iostream>
#include <string>

using namespace std;

string a;
string b;

// string 2개를 비교하기 위한 dp 테이블
int dp[1001][1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 0번째 행, 열에는 공백 추가
	// 1번째 행, 열부터 비교하기 위해서
	cin >> a >> b;
	a = " " + a;
	b = " " + b;

	// 행 개수 n, 열 개수 m
	int n = a.length();
	int m = b.length();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// 0번째 행, 열에는 비교할 문자가 없으므로 0으로 초기화
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			// 비교하는 두 문자가 같을 경우에 이전까지 비교한 값 + 1
			else if (a[i] == b[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			// 비교하는 두 문자가 같지 않을 경우에는 비교하기 전 문자 중 더 큰 것
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	

	cout << dp[n-1][m-1];

}