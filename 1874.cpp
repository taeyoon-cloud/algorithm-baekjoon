// 1874��: ���� ����
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int n; // 1~n������ ��
	stack<int> st; // ����
	vector<int> vec; // �Է��� ���� �����ϴ� ����
	vector<char> ans; // +, -���� �����ϴ� ����
	cin >> n;
	int num;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		vec.push_back(num); // �Է��� �� ��ü�� ���Ϳ� �Է�
	}
	int j = 0; // ������ ���� ������ top�� ���ϱ� ���� ����
	for (int i = 1; i <= n; i++) {
		st.push(i);
		ans.push_back('+'); // push���� ��� +
		while (!st.empty() && vec[j] == st.top()) { // ������ ���� ������ top�� ���� ���
			st.pop(); // pop�Ѵ�
			ans.push_back('-'); // pop���� ��� -
			j++; // pop�����Ƿ� ������ ���� ������ �ѱ��.
		}
	}
	if (!st.empty()) // �� while���� �������Դµ� stack�� ���� ���� �ִ� ���, �Է��� ���� ����� ����.
		cout << "NO" << '\n';

	else {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << '\n';
	}
	return 0;