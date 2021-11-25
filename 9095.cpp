//9095번: 1, 2, 3 더하기
#include <iostream>

using namespace std;

int add(int num) {
	if (num == 1) return 1;
	else if (num == 2) return 2;
	else if (num == 3) return 4;

	return add(num - 1) + add(num - 2) + add(num - 3); //일반식
}

int main() {
	int test; // 테스트 케이스
	cin >> test;
	while (test) {
		int n; // 각 테스트 케이스의 입력 숫자
		cin >> n;
		cout << add(n) << endl;
		test--;
	}
	return 0;
}