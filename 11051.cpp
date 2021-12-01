// 11051번: 이항 계수 2
#include <cstdio>

int N, K;
long long ncr[1001][1001];

long long comb(int n, int r) {
	if (ncr[n][r] > 0) return ncr[n][r];
	return ncr[n][r] = (comb(n - 1, r) + comb(n - 1, r - 1)) % 10007;
}

int main() {
	scanf("%d %d", &N, &K);
	for (int i = 0; i <= N; i++)
		for (int j = 0; j <= i; j++)
			if (i == j || j == 0) ncr[i][j] = 1;
	printf("%lld\n", comb(N, K));
	return 0;
}