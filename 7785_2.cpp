// 7785��: ȸ�翡 �ִ� ���
#include <iostream>
#include <set>
#include <string>

using namespace std;

set<string> company; // �����ϴ� �ο��� �����ϴ� set
set<string>::reverse_iterator iter; // company set�� �������� ���� �ݺ���
int n; // ���� ����� ��
string name, status; // ������ �� ������ ����(enter or leave)�� �����ϴ� ����

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> name >> status;
		if (status == "enter") // ȸ�翡 ������ ���� ���
			company.insert(name); // set�� ���� ����
		else // �׷��� ���� ��� -> ȸ�翡�� ������ ������ ���
			company.erase(name); // set���� ���� ����
	}
	for (iter = company.rbegin(); iter != company.rend(); iter++)
		cout << *iter << "\n"; // ���� �������� ���
	return 0;


}