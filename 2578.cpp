// 2578��: ����
#include <iostream>
#define NUM 5
using namespace std;

int arr[NUM][NUM]; // ������ ĭ ��(5 * 5)
bool visited[NUM][NUM]; // �ش� ĭ�� �������� ���������� Ȯ���ϴ� �迭
int bingo; // bingo == 3�̸� ���� ��ħ
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
		// ��ȸ�ڰ� �θ��� �� �Է�
		int x;
		cin >> x;

		// ��ȸ�ڰ� �θ��� �� ����(�湮 ó��)
		for (int i = 0; i < NUM; i++) {
			for (int j = 0; j < NUM; j++) {
				if (arr[i][j] == x) visited[i][j] = true;
			}
		}
		
		// �������� �ƴ��� ������ Ȯ��
		for (int i = 0; i < NUM; i++) {
			if (visited[i][0] && visited[i][1] && visited[i][2] && visited[i][3] && visited[i][4]) {
				bingo++;
			}
		}

		//cout << "���� Ȯ���� �� ���� ����: " << bingo << "\n";
		// �������� �ƴ��� ������ Ȯ��
		for (int i = 0; i < NUM; i++) {
			if (visited[0][i] && visited[1][i] && visited[2][i] && visited[3][i] && visited[4][i]) {
				bingo++;
			}
		}
		//cout << "���� Ȯ���� �� ���� ����: " << bingo << "\n";
		// �������� �ƴ��� �밢�� �� Ȯ��
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

		//cout << "�밢�� Ȯ���� �� ���� ����: " << bingo << "\n";

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
		//cout << "�밢�� Ȯ���� �� ���� ����: " << bingo << "\n";
		//cout << bingo << " ";
		bingo = 0;

	}

	cout << answer;
}
