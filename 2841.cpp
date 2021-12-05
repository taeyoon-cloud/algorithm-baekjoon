// 2841번: 외계인의 기타 연주
#include <iostream>
#include <stack>

using namespace std;
int N; // 연주하는 음의 개수
int P; // 한 줄에 있는 프랫의 수
int line; // 줄
int fret; // 프랫
int moving; // 움직임의 수

stack<int> s[7]; // 음을 저장하는 스택
int line_top[7]; // 갈 줄의 top값을 저장하는 배열

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); // 입출력 시간 단축

	cin >> N >> P; // 연주하는 음의 개수, 한 줄에 있는 프랫의 수
	while (N--) {
		cin >> line >>fret; // 줄, 프랫 입력
		while (fret < line_top[line]) { // 연주해야할 프랫이 그 줄 프랫에서 가장 큰 값보다 작을 경우
			s[line].pop(); // 그 줄의 가장 큰 값 pop
			if (s[line].empty()) { // pop하다가 line줄에 누르고 있는 프랫이 하나도 없을경우(s스택이 비었을 경우)
				line_top[line] = 0; // line줄 프랫의 최댓값을 0으로 지정해줌
				moving++; // line줄에서 누르고 있던 마지막 프랫에서 손가락을 떼었으므로 moving++
				continue; // 다시 while문으로 
			}
			// pop을 했지만 아직 line줄에 누르고 있는 프랫이 있을 경우(s스택이 비지 않았을 경우)
			line_top[line] = s[line].top(); // 그 줄의 가장 큰값을 pop한 후의 s스택의 top값으로 지정
			moving++; // pop을 해서 손가락을 떼었으므로 moving++
		}
		if (fret > line_top[line]) { // 연주해야할 프랫이 그 줄 프랫에서 가장 큰 값보다 클 경우
			s[line].push(fret); // s스택에 그 프랫을 바로 push
			moving++; // 새로운 프랫을 손가락으로 눌렀으므로 moving++
			line_top[line] = s[line].top(); // line줄에서 프랫의 가장 큰 값이 직전에 push한 값을 바뀜
		}
		else if (fret == line_top[line]) // 연주해야할 프랫이 그 줄 프랫에서 가장 큰 값과 같은 경우
			continue; // 위 두 경우에서 모두 처리 가능하므로 그냥 넘어감
		
	}

	cout << moving << "\n";
	return 0;
}