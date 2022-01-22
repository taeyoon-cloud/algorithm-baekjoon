// 1072번: 게임
#include <iostream>


#define INF 1000000000
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long X, Y, Z; // 게임횟수 X, 이긴횟수 Y, 승률 Z

	cin >> X >> Y;
	Z = ((long double)Y / (long double)X) * 100;

	long long left = 1;
	long long right = INF;
	long long mid; // 게임 수
	long long value; // Z와 승률을 비교하기 위한 변수
	long long answer = INF; // 승률이 변하기 위한 최소한의 게임수를 저장하는 변수
	while (left <= right) {
		mid = (left + right) / 2;
		value = ((long double)(Y + mid) / (long double)(X + mid)) * 100; // long double해줘야함
		if (value > Z) { // 구한 value가 기존 승률 Z보다 클 경우 더 작은 mid값(더 해야하는 게임의 수)을 찾기 위해 게임 수를 줄인다.
			if (answer > mid) answer = mid; // answer에 최소한의 게임수를 업데이트
			right = mid - 1;
		}
		else left = mid + 1; // 구한 value가 기존 승률 Z 이하일 경우 게임수를 늘려야 함(사실 더 작아지지는 않음)

	}
	if (Z >= 99) cout << -1 << "\n"; // Z가 절대 변하지 않는 조건이 뭘까? -> 99%에서 100%만드는 경우만 불가능!
	else cout << answer << "\n";
	
	return 0;
}