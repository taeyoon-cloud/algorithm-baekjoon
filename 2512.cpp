// 2512번: 예산
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> vec;
long long N, M; // 지방의 수 N, 총 예산 M
int budget; // 각 지방의 예산

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> budget;
		vec.push_back(budget);
	}

	cin >> M;

	long long left = 1;
	long long right = *max_element(vec.begin(), vec.end());

	while (left <= right) {
		long long total = 0; // 예산의 총합(총예산 M이하여야함)
		long long mid = (left + right) / 2; // 상한액
		for (int i = 0; i < N; i++) {
			if (vec[i] >= mid) total += mid; // 상한액 이상을 요청했을 때는 상한액을 준다.
			else total += vec[i]; // 상한액 미만을 요청했을 때는 요청한 금액을 그대로 준다.
		}

		if (total > M) right = mid - 1;
		else left = mid + 1;
	}

	cout << right << "\n";
	return 0;

	
}