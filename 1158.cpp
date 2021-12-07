// 1158번: 요세푸스 문제
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, K; // 사람의 수, K
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		v.push_back(i); // 1~N까지의 사람

	int pos = 0; // 출력할 index를 저장하는 변수
	cout << "<";
	while (!v.empty()) {
		pos = (pos + (K - 1)) % v.size(); //원으로 되어있으므로 
		cout << v[pos]; // 출력
		v.erase(v.begin() + pos); //출력한 숫자는 vector에서 삭제
		if (v.size() == 0) cout << ">" << "\n";
		else cout << ", ";
	}

	return 0;
}