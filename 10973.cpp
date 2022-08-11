// 10973번: 이전 순열
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n; // 1~n까지의 순열
vector<int> arr; // 주어지는 순열
vector<int> temp_arr; // 순열 확인을 위한 임시 순열

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	for (int i = 1; i <= n; i++)
		temp_arr.push_back(i);

	// 만약 입력한 순열이 사전 순으로 입력한 첫번째 순열이라면
	// -1 출력 후 종료
	if (temp_arr == arr) {
		cout << -1 << "\n";
		return 0;
	}

	// 이전 순열 구하기
	prev_permutation(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

}