// 7785번: 회사에 있는 사람
#include <iostream>
#include <set>
#include <string>

using namespace std;

set<string> company; // 출입하는 인원을 저장하는 set
set<string>::reverse_iterator iter; // company set을 역순으로 도는 반복자
int n; // 출입 기록의 수
string name, status; // 직원과 그 직원의 상태(enter or leave)를 저장하는 변수

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> name >> status;
		if (status == "enter") // 회사에 직원이 왔을 경우
			company.insert(name); // set에 직원 삽입
		else // 그렇지 않을 경우 -> 회사에서 직원이 나갔을 경우
			company.erase(name); // set에서 직원 삭제
	}
	for (iter = company.rbegin(); iter != company.rend(); iter++)
		cout << *iter << "\n"; // 사전 역순으로 출력
	return 0;


}