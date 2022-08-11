// 2960번: 에라토스테네스의 체
#include <iostream>

using namespace std;

int arr[1001]; // 해당 index의 지웠는지 여부를 저장하는 배열
int cnt; // 몇번 지웠는지 확인하기 위한 변수
int num; // 지운 수
int n, k; // 입력값 n, k

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) {
			arr[i] = 1;
			//cout << i << "\n";
			cnt++;
			if (cnt == k) {
				num = i;
				break;
			}
			int j = 2;
			while (i * j <= n) {
				if (arr[i * j] == 0) {
					arr[i * j] = 1;
					//cout << i*j << "\n";
					cnt++;
					j++;
					if (cnt == k) {
						num = i * (j - 1);
						break;
					}
				}
				else
					j++;
			}
		}
	}

	cout << num;
}