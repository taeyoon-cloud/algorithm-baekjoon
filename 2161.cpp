// 2161번: 카드1
#include <iostream>
#include <queue>

using namespace std;


queue<int> cards;

int main() {
	int n; // 카드 수 N

	cin >> n;
	for (int i = 1; i <= n; i++) // 큐에 카드 집어넣기
		cards.push(i);

	while (cards.size() >= 1) { // 마지막 카드가 1개만 남을 때까지
		int now = cards.front();
		cards.pop();
		cout << now << " "; // 1. 제일 위에 있는 카드를 바닥에 버림

		if (cards.size() == 1) { //만약 카드가 1개만 남는다면 해당 카드를 출력하고 종료
			cout << cards.front() << " ";
			break;
		}
		now = cards.front(); // 2. 제일 위에 있는 카드를 큐의 맨 뒤에 넣음
		cards.pop();
		cards.push(now);
	}

}