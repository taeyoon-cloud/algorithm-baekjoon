// 2193번: 이친수
#include <cstdio>

long long N, pin[91][2];

int main() {
	// 기저조건
	pin[1][0] = 1; // 한자리 수 중 0으로 끝나는 이친수
	pin[1][1] = 0; // 한자리 수 중 1로 끝나는 이친수
	pin[2][0] = 1; // 두 자리 수 중 0으로 끝나는 이친수
	pin[2][1] = 0; // 두 자리 수 중 1로 끝나는 이친수


	scanf("%d", &N);
	for (int i = 3; i <= N; i++) {
		pin[i][0] = pin[i - 1][0] + pin[i - 1][1];
		pin[i][1] = pin[i - 1][0];
	}
	printf("%lld\n", pin[N][0] + pin[N][1]);
	return 0;
}