// 9095��: 1, 2, 3 ���ϱ�
#include <cstdio>

int T, N, arr[12];

int main() {
	scanf("%d", &T); // �׽�Ʈ ���̽�
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		if (arr[N] > 0) printf("%d\n", arr[N]);
		else {
			for (int j = 4; j <= N; j++) {
				arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
			}
			printf("%d\n", arr[N]);
		}
	}
	return 0;
}