// 11726��: 2xn Ÿ�ϸ�
#include <cstdio>

int n, squ[1001];

int main() {
	scanf("%d", &n);

	squ[1] = 1;
	squ[2] = 2;

	for (int i = 3; i <= n; i++)
		squ[i] = (squ[i - 1] + squ[i - 2]) % 10007;

	printf("%d\n", squ[n]);
	return 0;
}