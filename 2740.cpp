// 2740번: 행렬 곱셈
#include <iostream>

using namespace std;

int n, m, k;
int arr_a[100][100]; // 행렬 A
int arr_b[100][100]; // 행렬 B
int arr_result[100][100]; // 행렬 A * B

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 행렬 A 입력
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			arr_a[i][j] = x;
		}
	}

	//행렬 B 입력
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			int x;
			cin >> x;
			arr_b[i][j] = x;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int c = 0; c < m; c++) {
				arr_result[i][j] += arr_a[i][c] * arr_b[c][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++)
			cout << arr_result[i][j] << " ";
		cout << "\n";
	}


}