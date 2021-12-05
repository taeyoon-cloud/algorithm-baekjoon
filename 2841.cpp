// 2841��: �ܰ����� ��Ÿ ����
#include <iostream>
#include <stack>

using namespace std;
int N; // �����ϴ� ���� ����
int P; // �� �ٿ� �ִ� ������ ��
int line; // ��
int fret; // ����
int moving; // �������� ��

stack<int> s[7]; // ���� �����ϴ� ����
int line_top[7]; // �� ���� top���� �����ϴ� �迭

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); // ����� �ð� ����

	cin >> N >> P; // �����ϴ� ���� ����, �� �ٿ� �ִ� ������ ��
	while (N--) {
		cin >> line >>fret; // ��, ���� �Է�
		while (fret < line_top[line]) { // �����ؾ��� ������ �� �� �������� ���� ū ������ ���� ���
			s[line].pop(); // �� ���� ���� ū �� pop
			if (s[line].empty()) { // pop�ϴٰ� line�ٿ� ������ �ִ� ������ �ϳ��� �������(s������ ����� ���)
				line_top[line] = 0; // line�� ������ �ִ��� 0���� ��������
				moving++; // line�ٿ��� ������ �ִ� ������ �������� �հ����� �������Ƿ� moving++
				continue; // �ٽ� while������ 
			}
			// pop�� ������ ���� line�ٿ� ������ �ִ� ������ ���� ���(s������ ���� �ʾ��� ���)
			line_top[line] = s[line].top(); // �� ���� ���� ū���� pop�� ���� s������ top������ ����
			moving++; // pop�� �ؼ� �հ����� �������Ƿ� moving++
		}
		if (fret > line_top[line]) { // �����ؾ��� ������ �� �� �������� ���� ū ������ Ŭ ���
			s[line].push(fret); // s���ÿ� �� ������ �ٷ� push
			moving++; // ���ο� ������ �հ������� �������Ƿ� moving++
			line_top[line] = s[line].top(); // line�ٿ��� ������ ���� ū ���� ������ push�� ���� �ٲ�
		}
		else if (fret == line_top[line]) // �����ؾ��� ������ �� �� �������� ���� ū ���� ���� ���
			continue; // �� �� ��쿡�� ��� ó�� �����ϹǷ� �׳� �Ѿ
		
	}

	cout << moving << "\n";
	return 0;
}