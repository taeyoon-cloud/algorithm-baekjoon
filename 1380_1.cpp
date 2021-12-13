// 1380번: 귀걸이
#include <stdio.h>

int main() {
	int n; //여학생의 수
	int a; // 입력받는 여학생 번호
	char b; // A or B 입력
	int index = 1; // 귀걸이를 돌려받지 못한 학생의 이름을 출력할 때 앞에 같이 출력할 번호

	while (true) {
		scanf("%d", &n);
		if (n == 0) break; // 0을 마지막 줄로 하여 입력 종료
		getchar(); // fgets함수를 이용해서 학생 이름을 입력받을 때 \n(개행문자)가 들어가는 것을 방지

		char students[102][62] = { 0, }; // 전체를 0으로 초기화
		bool arr[62] = { 0, }; // 전체를 false로 초기화(1이 true)

		for (int i = 1; i <= n; i++)
			fgets(students[i], sizeof(students[i]), stdin); // 학생 이름 입력
		for (int i = 1; i <= 2 * n - 1; i++) {
			scanf("%d %c", &a, &b);
			arr[a] = !arr[a];
			// 원래 모든 학생이 false로 초기화 되어있었으므로 한 번 입력되면, true, 두번 입력되면 false로 바뀜
			// false -> 돌려받은 경우(2번 입력), true -> 돌려받지 못한 경우(1번 입력)
		}
		for (int i = 1; i <= n; i++)
			if (arr[i] == true) printf("%d %s", index++, students[i]);
		// 귀걸이를 돌려받지 못한 학생들 출력
	}
	return 0;
}