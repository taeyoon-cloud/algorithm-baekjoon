// 2503��: ���� �߱�
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n; // ���� ����
int num, strike, ball; // Ȯ���� ����, ��Ʈ����ũ ��, �� ��
bool check[1001]; // 123~987������ �� �߿��� �ĺ��� �� �� �ִ� ���� üũ�ϱ� ���� �迭 (true�� �ĺ�, false�� �ĺ� �ƴ�)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(check, check + 1001, true); // ó������ �𸣹Ƿ� �� true�� �ʱ�ȭ

	// �ȵǴ� ���ڵ��� false�� �ٲ�
	for (int i = 123; i <= 987; i++) {
		string temp = to_string(i);
		//0�� �� ��� �ȵ�
		if (temp[0] == '0' || temp[1] == '0' || temp[2] == '0') {
			check[i] = false;
		}
		// ���� ���� �ϳ��� �ִ� ��� �ȵ�
		if (temp[0] == temp[1] || temp[1] == temp[2] || temp[2] == temp[0]) {
			check[i] = false;
		}
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num >> strike >> ball;
		string temp = to_string(num); // string���� ��ȯ
		
		for (int i = 123; i <= 987; i++) {
			if (check[i]) {
				string compare = to_string(i); // 123~987���� ���� ���� string���� �ٲ�
				int numStrike = 0;
				int numBall = 0;

				for (int x = 0; x < 3; x++) {
					for (int y = 0; y < 3; y++) {
						// ��Ʈ����ũ���� Ȯ��
						if (temp[x] == compare[y] && x == y) {
							numStrike++;
							continue;
						}
						// ������ Ȯ��
						if (temp[x] == compare[y] && x != y) {
							numBall++;
							continue;
						}
					}
				}
				// ��Ʈ����ũ�� �� ������ �ٸ� ��� �ĺ��� �� �� ����
				if (strike != numStrike || ball != numBall) {
					check[i] = false;
					continue;
				}
			}
		}
		
	}

	int answer = 0;

	for (int i = 123; i <= 987; i++) {
		if (check[i]) answer++;
	}

	cout << answer << "\n";

	return 0;
}