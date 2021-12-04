// 1149��: RGB�Ÿ�
#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][4]; // ���� ĥ�ϴ� ����� �����ϴ� �迭
int cost[4]; // �ݺ����� ���� ������ ���� ĥ�ϴ� ����� �����ϴ� �迭

int main() {
	int N; // ���� ��
	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		cin >> cost[1] >> cost[2] >> cost[3];
		dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + cost[1];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + cost[2];
		dp[i][3] = min(dp[i - 1][1], dp[i - 1][2]) + cost[3];
	}

	cout << min(dp[N][1], min(dp[N][2], dp[N][3]));
	return 0;
}