// 11866번: 요세푸스 문제 0
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, k;
queue<int> q; // 사람을 저장하는 ㄴ큐
vector<int> result; // 순열 결과를 저장하는 벡터

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push(i);

	int temp = 1;
	while (q.size() != 1) {
		if (temp % k != 0) { // temp가 k가 아니라면 q의 front를 pop하고 다시 q에 넣음
			int now = q.front();
			q.pop();
			q.push(now);
			temp++;
		}
		else { // temp가 k일때만 원에서 사람을 제거
			int now = q.front();
			q.pop();
			result.push_back(now);
			temp = 1;
		}

	}
	// 마지막 사람도 제거
	int now = q.front();
	result.push_back(now);

	cout << "<";
	for (int i = 0; i < n-1; i++) {
		cout << result[i] << ", ";
	}
	cout << result[n - 1] << ">";
}