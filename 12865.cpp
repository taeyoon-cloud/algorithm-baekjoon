// 12865��: ����� �賶
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ��ǰ�� �� n, ��ƿ �� �ִ� ���� k
int n, k;
// dp ���̺�
int dp[101][100001];
// �� ��ǰ�� ��ġ�� �����ϴ� ����
vector<pair<int, int>> things;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	// 0��° ���ǿ��� 0, 0 ����
	things.push_back({ 0, 0 });

	for (int i = 0; i < n; i++) {
		// ��ǰ�� ���� w, ��ġ v
		int w, v;
		cin >> w >> v;
		things.push_back({ w, v });
	}

	sort(things.begin(), things.end());


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j - things[i].first >= 0) // �ε����� 0 �̻��� ��쿡�� ����
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - things[i].first] + things[i].second);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	
	cout << dp[n][k];
}