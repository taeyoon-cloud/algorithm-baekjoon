// 9461��: �ĵ��� ����
#include <cstdio>

long long arr[101]; // ���� �ʹ� Ŀ�� long long���� �������

long long pado(int n) {
	if (n == 1 || n == 2 || n == 3) return 1;
	if (n == 4 || n == 5) return 2;

	if (arr[n] > 0) return arr[n];
	arr[n] = pado(n - 1) + pado(n - 5); //��ȭ��
	return arr[n];
}

int main() {
	int test;
	scanf("%d", &test);
	while (test--) {
		int num;
		scanf("%d", &num);
		printf("%lld\n", pado(num));
	}
	return 0;
}