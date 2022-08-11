// 2161��: ī��1
#include <iostream>
#include <queue>

using namespace std;


queue<int> cards;

int main() {
	int n; // ī�� �� N

	cin >> n;
	for (int i = 1; i <= n; i++) // ť�� ī�� ����ֱ�
		cards.push(i);

	while (cards.size() >= 1) { // ������ ī�尡 1���� ���� ������
		int now = cards.front();
		cards.pop();
		cout << now << " "; // 1. ���� ���� �ִ� ī�带 �ٴڿ� ����

		if (cards.size() == 1) { //���� ī�尡 1���� ���´ٸ� �ش� ī�带 ����ϰ� ����
			cout << cards.front() << " ";
			break;
		}
		now = cards.front(); // 2. ���� ���� �ִ� ī�带 ť�� �� �ڿ� ����
		cards.pop();
		cards.push(now);
	}

}