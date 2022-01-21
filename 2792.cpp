// 2792번: 보석 상자
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> vec;
int N, M; // 아이들의 수 N, 색상의 수 M

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	int num;
	for (int i = 0; i < M; i++) {
		cin >> num;
		vec.push_back(num);
	}

	int left, right, mid;
	left = 1;
	right = *max_element(vec.begin(), vec.end()); // 입력 받은 보석의 수 중 최댓값


	while (left <= right) {
		int cnt = 0; // mid값으로 계산하는 전체 학생 수
		int mid = (left + right) / 2;
		for (int i = 0; i < M; i++) {
			int a = vec[i] / mid; // 보석의 개수를 mid값으로 나눠준다.
			int b = vec[i] % mid; // 보석의 개수를 mid값으로 나눌 때 나눠지지 않는 나머지
			cnt += a; // 계산하는 전체 학생수를 더해준다.
			if (b) cnt++; // 만약 나눴을 때 나누어 떨어지지 않는다면 짬처리할 학생 한명 추가
		}

		if (cnt > N) //구한 학생의 수가 N보다 클 경우에는 절대로 해당 질투심을 만족시킬 수 없는 것
					 // 즉, 질투심을 높여야 한다.
			left = mid + 1;
		else // 구한 학생의 수가 N보다 작거나 같을 경우에는 이 값으로 나눠줄 수 있는 것이다.
			 // 질투심을 더 낮출 수 있을 지 도전해본다.
			right = mid - 1;


	}

	cout << left << "\n";
	return 0;
}