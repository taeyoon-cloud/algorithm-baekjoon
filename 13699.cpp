//13699번: 점화식
#include <stdio.h>

#define NUM 36

long long table[NUM];

int main() {
	int n;
	scanf("%d", &n);

	table[0] = 1;
	
	for (int i = 1; i <= n; i++) {
		long long total = 0; // table[i]의 값을 저장하기 위한 변수
		for (int j = 0; j < i; j++) {
			total += table[j] * table[i - j - 1]; // 여기서 table[i]의 값을 구함
			//j + (i-j-1) = i-1
		}
		table[i] = total; // 여기서 table[i]의 값을 넣어줌
	}
	printf("%lld\n", table[n]);
	return 0;
}