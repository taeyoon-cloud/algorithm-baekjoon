// 7785��: ȸ�翡 �ִ� ���
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

map<string, string> abc;
int n; // ���Ա���� ��
string name; // ȸ����� �̸�
string status; // ȸ����� ���� (enter or leave)

map<string, string>::reverse_iterator iter;
// ȸ����� �̸��� ������ �������� ����ؾ� �ϹǷ� reverse_iterator ���

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	while (n--) {
		cin >> name >> status;
		if (status == "enter") // ȸ�翡 ������ ���� ���
			abc[name] = status; // map�� key���� enter�� ����
		else { // �׷��� ���� ���(ȸ�翡�� ������ ������� -> leave)
			abc.erase(name); // map���� ȸ��� ����
		}
	}
	for (iter = abc.rbegin(); iter != abc.rend(); iter++)
		cout << (*iter).first << "\n"; // ȸ����� �̸��� ���� �������� ���
	return 0;
}