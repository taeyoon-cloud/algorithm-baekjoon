//2747번: 피보나치 수
#include <stdio.h>

#define NUM 45

int fib[NUM];

int main() {
	int n;
	scanf("%d", &n);

	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	printf("%d\n", fib[n]);
	return 0;
}