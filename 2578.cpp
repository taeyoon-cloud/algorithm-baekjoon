// 2578번: 빙고
#include <iostream>
#define NUM 5
using namespace std;

int arr[NUM][NUM]; // 빙고판 칸 수(5 * 5)
bool visited[NUM][NUM]; // 해당 칸을 지웠는지 안지웠는지 확인하는 배열
int bingo; // bingo == 3이면 빙고를 외침
bool if_bingo = false;
int answer;
int first;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < NUM; i++) {
		for (int j = 0; j < NUM; j++) {
			int x;
			cin >> x;
			arr[i][j] = x;
		}
	}



	for (int index = 1; index <= NUM * NUM; index++) {
		// 사회자가 부르는 수 입력
		int x;
		cin >> x;

		// 사회자가 부르는 수 제거(방문 처리)
		for (int i = 0; i < NUM; i++) {
			for (int j = 0; j < NUM; j++) {
				if (arr[i][j] == x) visited[i][j] = true;
			}
		}
		
		// 빙고인지 아닌지 가로줄 확인
		for (int i = 0; i < NUM; i++) {
			if (visited[i][0] && visited[i][1] && visited[i][2] && visited[i][3] && visited[i][4]) {
				bingo++;
			}
		}

		//cout << "가로 확인한 후 빙고 개수: " << bingo << "\n";
		// 빙고인지 아닌지 세로줄 확인
		for (int i = 0; i < NUM; i++) {
			if (visited[0][i] && visited[1][i] && visited[2][i] && visited[3][i] && visited[4][i]) {
				bingo++;
			}
		}
		//cout << "세로 확인한 후 빙고 개수: " << bingo << "\n";
		// 빙고인지 아닌지 대각선 줄 확인
		for (int i = 0; i < NUM; i++) {
			if (visited[i][i]) {
				if_bingo = true;
			}
			else {
				if_bingo = false;
				break;
			}

		}
		if (if_bingo) bingo++;
		if_bingo = false;

		//cout << "대각선 확인한 후 빙고 개수: " << bingo << "\n";

		for (int i = 0; i < NUM; i++) {
			if (visited[i][4-i]) {
				if_bingo = true;
			}
			else {
				if_bingo = false;
				break;
			}
		}
		if (if_bingo) bingo++;
		if_bingo = false;

		if (bingo >=3 && first == 0) {
			answer = index;
			first = 1;

		}
		//cout << "대각선 확인한 후 빙고 개수: " << bingo << "\n";
		//cout << bingo << " ";
		bingo = 0;

	}

	cout << answer;
}
