//11050번: 이항 계수 1
#include <cstdio>

int N, K, ncr[12][12];

int comb(int n, int r) {
	if (ncr[n][r] > 0) return ncr[n][r];

	return ncr[n][r] = comb(n - 1, r) + comb(n - 1, r - 1);
}

int main() {
	scanf("%d%d", &N, &K);
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= i; j++)
			if (i == j || j == 0) ncr[i][j] = 1;
	}
	printf("%d\n", comb(N, K));
	return 0;
}