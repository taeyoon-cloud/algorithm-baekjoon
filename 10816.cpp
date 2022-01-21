// 10816��: ���� ī�� 2
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> vec;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M; // ����̰� ������ �ִ� ���� ���� N, ������� ���� ī���� ���� M
	int num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end()); // �������� ����

	cin >> M;
	int findNum;
	for (int i = 0; i < M; i++) {
		cin >> findNum;
		int cnt = upper_bound(vec.begin(), vec.end(), findNum) - lower_bound(vec.begin(), vec.end(), findNum);
		cout << cnt << "\n";
	}

	return 0;

}