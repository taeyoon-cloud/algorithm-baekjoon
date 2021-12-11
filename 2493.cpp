// 2493번: 탑
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

stack<pair<int, int>> tower; // 탑의 index와 높이를 저장하는 스택
int N; // 탑의 개수
int height; //탑의 높이

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N; // 탑의 개수
	for (int i = 1; i <= N; i++) {
		cin >> height;
		while (!tower.empty()) { // stack이 비지 않았을 경우 반복문을 돌려준다.
			if (tower.top().second < height) 
				// 만약 stack의 top의 높이가 입력한 값보다 작다면 필요가 없으므로 pop
				tower.pop();
			else { // stack의 top의 높이가 입력한 값보다 크다면 현재 스택의 top값의 index를 출력
				cout << tower.top().first << "\n";
				break; // 출력 후 반복문 종료
			}
		}
		if (tower.empty()) // 만약 stack이 비어 있을 경우에는 0 출력
			cout << 0 << "\n";
		tower.push(make_pair(i, height)); // stack에 index와 높이 입력
	}
	return 0;
}