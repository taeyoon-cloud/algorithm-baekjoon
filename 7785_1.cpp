// 7785번: 회사에 있는 사람
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

map<string, string> abc;
int n; // 출입기록의 수
string name; // 회사원의 이름
string status; // 회사원의 상태 (enter or leave)

map<string, string>::reverse_iterator iter;
// 회사원에 이름을 사전의 역순으로 출력해야 하므로 reverse_iterator 사용

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> name >> status;
		if (status == "enter") // 회사에 직원이 들어온 경우
			abc[name] = status; // map의 key값을 enter로 변경
		else { // 그렇지 않은 경우(회사에서 직원이 나간경우 -> leave)
			abc.erase(name); // map에서 회사원 삭제
		}
	}
	for (iter = abc.rbegin(); iter != abc.rend(); iter++)
		cout << (*iter).first << "\n"; // 회사원의 이름을 사전 역순으로 출력
	return 0;
}