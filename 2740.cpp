// 2740��: ��� ����
#include <iostream>

using namespace std;

int n, m, k;
int arr_a[100][100]; // ��� A
int arr_b[100][100]; // ��� B
int arr_result[100][100]; // ��� A * B

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// ��� A �Է�
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			arr_a[i][j] = x;
		}
	}

	//��� B �Է�
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