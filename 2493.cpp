// 2493��: ž
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

stack<pair<int, int>> tower; // ž�� index�� ���̸� �����ϴ� ����
int N; // ž�� ����
int height; //ž�� ����

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N; // ž�� ����
	for (int i = 1; i <= N; i++) {
		cin >> height;
		while (!tower.empty()) { // stack�� ���� �ʾ��� ��� �ݺ����� �����ش�.
			if (tower.top().second < height) 
				// ���� stack�� top�� ���̰� �Է��� ������ �۴ٸ� �ʿ䰡 �����Ƿ� pop
				tower.pop();
			else { // stack�� top�� ���̰� �Է��� ������ ũ�ٸ� ���� ������ top���� index�� ���
				cout << tower.top().first << "\n";
				break; // ��� �� �ݺ��� ����
			}
		}
		if (tower.empty()) // ���� stack�� ��� ���� ��쿡�� 0 ���
			cout << 0 << "\n";
		tower.push(make_pair(i, height)); // stack�� index�� ���� �Է�
	}
	return 0;
}