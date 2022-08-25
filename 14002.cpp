// 14002번: 가장 긴 증가하는 부분 수열 4
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 수열 arr의 크기 n
int n;
// 주어진 수열
int arr[1001];
// 가장 긴 증가하는 부분 수열을 저장하기 위한 벡터
vector<int> vec;
// dp 테이블
int dp[1001];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[i] = x;
	}

	fill(dp, dp + 1001, 1);
	

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	

	int length = *max_element(dp, dp + 1001);
	cout << length << "\n";
	
	for (int i = n-1; i >= 0; i--) {
		if (dp[i] == length) {
			vec.push_back(arr[i]);
			length--;
		}
	}

	for (int i = vec.size() - 1; i >= 0; i--) {
		cout << vec[i] << " ";
	}



	
}