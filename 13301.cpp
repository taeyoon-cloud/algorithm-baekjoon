//13301번: 타일 장식물
#include <stdio.h>

#define NUM 81

long long fib[NUM]; // 범위 초과 예방

int main() {
	int n; // 타일의 개수
	scanf("%d", &n);

	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	long long square = fib[n] * 2 + (fib[n] + fib[n - 1]) * 2;
	//직사각형의 둘레
	printf("%lld\n", square);

	return 0;
}