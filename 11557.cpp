// 11557번: Yangjogang of The Year
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

map<string, int> school; // 학교의 이름과 한 해동안 소비한 술의 양을 저장하는 map
vector<pair<string, int>> vec(school.begin(), school.end());
// map의 value값으로 정렬을 하고 싶으면 map을 vector로 변환한 후 vector에서 정렬을 하는 것 처럼 해준다.

int T; // 테스트 케이스
int N; // 학교의 수
string S; // 학교 이름
int L; // 소비한 술의 양

//map의 value값, 즉 vector의 두번째 값으로 정렬을 해줄 것이기 때문에 따로 비교함수를 만들어줘야한다.
bool cmp(pair<string, int>& a, pair<string, int>& b) {
	if (a.second == b.second) return a.second < b.second;
	return a.second < b.second;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// vector<pair<string, int>>::iterator iter; // 반복자

	cin >> T; // 테스트 케이스
	while (T--) {
		cin >> N; // 학교의 수
		while (N--) {
			cin >> S >> L; // 학교 이름과 소비한 술의 양 입력
			school[S] = L; // 학교이름을 key로, 소비한 술의 양을 value로 입력
		}
		vector<pair<string, int>> vec(school.begin(), school.end()); //map을 vector로 전환
		sort(vec.begin(), vec.end(), cmp); // 앞서 만든 cmp함수를 이용해서 value를 기준으로 정렬해줌
		cout << vec.back().first << "\n"; // 오름차순이므로 제일 큰 값은 vector의 back에 있다.

	}
	return 0;
}