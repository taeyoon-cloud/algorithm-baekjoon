#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int num;
	int index = 5;
	int count = 0;
	cin >> num;
	while (index <= num) {
		count += num / index; // 입력받은 수에서 5가 한번 들어가는 횟수를 count에 더해줌
		index *= 5; // 만약 5가 2번 이상 들어가 있을 경우를 계산해주기 위해 index에 5를 곱해주고 while문을 다시 돌림
	}

	cout << count << endl;
	return 0;

}