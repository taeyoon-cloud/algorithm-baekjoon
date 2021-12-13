// 1380번: 귀걸이
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int n;// 학생의 수
	int count = 1;
	int a;
	char b;

	while (true) {
		cin >> n;
		if (n == 0) break;
		getchar(); // cin으로 숫자르 받고 문자를 받을 때는 버퍼 비우기 용도로 getchar()를 해줘야함
		string students[102]; // 학생의 수를 저장하는 string 배열
		vector<char> vec[102]; // 학생이 몇번 체크 되었는지 저장하는 vector

		for (int i = 1; i <= n; i++)
			getline(cin, students[i], '\n'); // 학생 이름 입력(한 줄을 다 받음)
		for (int i = 1; i <= 2 * n - 1; i++) {
			cin >> a >> b;
			vec[a].push_back(b);
		}
		for (int i = 1; i <= n; i++)
			if (vec[i].size() == 1) cout << count++ << " " << students[i] << "\n";
		//벡터의 사이즈가 1이라면 귀걸이를 제출하고 받지 못한 것
	}
	return 0;
}