//13699��: ��ȭ��
#include <stdio.h>

#define NUM 36

long long table[NUM];

int main() {
	int n;
	scanf("%d", &n);

	table[0] = 1;
	
	for (int i = 1; i <= n; i++) {
		long long total = 0; // table[i]�� ���� �����ϱ� ���� ����
		for (int j = 0; j < i; j++) {
			total += table[j] * table[i - j - 1]; // ���⼭ table[i]�� ���� ����
			//j + (i-j-1) = i-1
		}
		table[i] = total; // ���⼭ table[i]�� ���� �־���
	}
	printf("%lld\n", table[n]);
	return 0;
}