//2805번: 나무 자르기
#include <iostream>

using namespace std;

long long trees[1000001]; // 나무의 길이들을 저장하는 배열
long long n, m; // 나무의 수 n, 집으로 가져가려는 나무의 길이 m
long long h; // 절단기의 높이 h


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long max = 0; // 입력된 나무 길이 중 최댓값을 저장하는 변수
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> trees[i];
		if (trees[i] > max) max = trees[i];
	}

	long long left, right, mid; // mid -> 절단기의 높이
	long long total; // 자른 나무의 길이의 총합을 저장하는 변수(m과 비교)
	left = 1;
	right = max;
	long long answer = 0; // 답을 저장하는 변수
	while (left <= right) {
		total = 0;
		mid = (left + right) / 2; // mid -> 절단기의 높이
		for (int i = 0; i < n; i++) {
			if (trees[i] - mid > 0) total += (trees[i] - mid);
			// 절단기의 높이보다 나무의 길이가 높은 경우에만 가져갈 수 있음
		}
		if (total >= m) {
			// 자른 나무 길이의 총합을 합친 값이 m이상일 경우
			// 절단기 높이를 높여서 절단기 높이의 최댓값을 구해본다.
			if (answer < mid) answer = mid;
			// mid값을 점점 높였을 때 total이 m이상일 경우이므로
			// total이 m이상인 것을 만족한다면 그 전 answer값은 mid값보다 작을 수 밖에 없다.
			// 우리는 높이의 최댓값을 찾아야 하므로 answer < mid 일때, answer = mid가 된다.
			left = mid + 1;
		}
		else right = mid - 1;
		// 자른 나무 길이의 총합이 m보다 작을 경우 절단기 높이를 낮춰서 나무를 더 많이 자른다.
	}

	cout << answer << "\n";
	return 0;

}