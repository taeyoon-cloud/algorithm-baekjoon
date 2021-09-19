#include <iostream>
#include <algorithm>
#include <string>
#include <map>


using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	//포켓몬의 수, 문제의 수
	cin >> N>> M;
	map <string, int> poketmonsName; // 문자열 기준으로 정렬
	map <int, string> poketmonsNum; // 숫자 기준으로 정렬
	
	int num = 1; // 포켓몬의 번호
	
	for (int i = 0; i < N; i++) {
		string poketmon;
		cin >> poketmon;
		poketmonsName.insert(make_pair(poketmon, num));
		poketmonsNum.insert(make_pair(num++, poketmon));

	}
	for (int i = 0; i < M; i++) {
		string problem;
		cin >> problem;
		//입력받은 값이 문자일 경우
		if (atoi(problem.c_str()) == 0)
		{
			cout << poketmonsName[problem] << '\n';
		}
		//입력받은 값이 숫자일 경우
		else
			cout << poketmonsNum[stoi(problem)] << '\n';
	}
	return 0;
}