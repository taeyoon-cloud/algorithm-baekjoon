// 1874번: 스택 수열
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int n; // 1~n까지의 수
	stack<int> st; // 스택
	vector<int> vec; // 입력한 값을 저장하는 벡터
	vector<char> ans; // +, -값을 저장하는 벡터
	cin >> n;
	int num;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		vec.push_back(num); // 입력한 값 전체를 벡터에 입력
	}
	int j = 0; // 벡터의 값과 스택의 top을 비교하기 위한 변수
	for (int i = 1; i <= n; i++) {
		st.push(i);
		ans.push_back('+'); // push했을 경우 +
		while (!st.empty() && vec[j] == st.top()) { // 벡터의 값과 스택의 top이 같은 경우
			st.pop(); // pop한다
			ans.push_back('-'); // pop했을 경우 -
			j++; // pop했으므로 벡터의 다음 값으로 넘긴다.
		}
	}
	if (!st.empty()) // 위 while문을 빠져나왔는데 stack에 값이 남아 있는 경우, 입력한 값을 만들수 없다.
		cout << "NO" << '\n';

	else {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << '\n';
	}
	return 0;