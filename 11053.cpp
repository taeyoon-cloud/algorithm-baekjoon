// 10153번: 가장 긴 증가하는 부분 수열
#include <iostream>
#include <algorithm>

using namespace std;

// 수열 크기
int n;
// 숫자를 저장하는 수열
int arr[1001];
// dp 테이블
int dp[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		arr[i] = x;
	}
	
	fill(dp, dp + 1001, 1);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	/*
	for (int i = 1; i <= n; i++) {
		cout << dp[i] << " ";
	}
	cout << "\n";
	*/

	cout << *max_element(dp, dp+1001);

}