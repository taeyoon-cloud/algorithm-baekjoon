// 11729번: 하노이 탑 이동 순서
#include <cstdio>
int total;
void hanoi(int num) {
	if (num == 1) {
		total++;
		return;
	}
	hanoi(num - 1);
	total++;
	hanoi(num - 1);

}

void hanoi2(int num, int start, int mid, int end) {
	if (num == 1) {
		printf("%d %d\n", start, end);
		return;
	}

	hanoi2(num - 1, start, end, mid);
	printf("%d %d\n", start, end);
	hanoi2(num - 1, mid, start, end);
}

int main() {
	int num;
	scanf("%d", &num);

	hanoi(num);
	printf("%d\n", total);

	hanoi2(num, 1, 2, 3);
	return 0;
}