// 2503번: 숫자 야구
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n; // 질문 개수
int num, strike, ball; // 확인할 숫자, 스트라이크 수, 볼 수
bool check[1001]; // 123~987까지의 수 중에서 후보가 될 수 있는 수를 체크하기 위한 배열 (true면 후보, false면 후보 아님)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(check, check + 1001, true); // 처음에는 모르므로 다 true로 초기화

	// 안되는 숫자들을 false로 바꿈
	for (int i = 123; i <= 987; i++) {
		string temp = to_string(i);
		//0이 들어갈 경우 안됨
		if (temp[0] == '0' || temp[1] == '0' || temp[2] == '0') {
			check[i] = false;
		}
		// 같은 수가 하나라도 있는 경우 안됨
		if (temp[0] == temp[1] || temp[1] == temp[2] || temp[2] == temp[0]) {
			check[i] = false;
		}
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num >> strike >> ball;
		string temp = to_string(num); // string으로 변환
		
		for (int i = 123; i <= 987; i++) {
			if (check[i]) {
				string compare = to_string(i); // 123~987까지 비교할 수를 string으로 바꿈
				int numStrike = 0;
				int numBall = 0;

				for (int x = 0; x < 3; x++) {
					for (int y = 0; y < 3; y++) {
						// 스트라이크인지 확인
						if (temp[x] == compare[y] && x == y) {
							numStrike++;
							continue;
						}
						// 볼인지 확인
						if (temp[x] == compare[y] && x != y) {
							numBall++;
							continue;
						}
					}
				}
				// 스트라이크와 볼 개수가 다른 경우 후보가 될 수 없음
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