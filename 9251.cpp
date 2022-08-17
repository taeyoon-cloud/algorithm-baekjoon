// 9251��: LCS
#include <iostream>
#include <string>

using namespace std;

string a;
string b;

// string 2���� ���ϱ� ���� dp ���̺�
int dp[1001][1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 0��° ��, ������ ���� �߰�
	// 1��° ��, ������ ���ϱ� ���ؼ�
	cin >> a >> b;
	a = " " + a;
	b = " " + b;

	// �� ���� n, �� ���� m
	int n = a.length();
	int m = b.length();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// 0��° ��, ������ ���� ���ڰ� �����Ƿ� 0���� �ʱ�ȭ
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			// ���ϴ� �� ���ڰ� ���� ��쿡 �������� ���� �� + 1
			else if (a[i] == b[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			// ���ϴ� �� ���ڰ� ���� ���� ��쿡�� ���ϱ� �� ���� �� �� ū ��
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	

	cout << dp[n-1][m-1];

}