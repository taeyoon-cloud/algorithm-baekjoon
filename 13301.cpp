//13301��: Ÿ�� ��Ĺ�
#include <stdio.h>

#define NUM 81

long long fib[NUM]; // ���� �ʰ� ����

int main() {
	int n; // Ÿ���� ����
	scanf("%d", &n);

	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	long long square = fib[n] * 2 + (fib[n] + fib[n - 1]) * 2;
	//���簢���� �ѷ�
	printf("%lld\n", square);

	return 0;
}