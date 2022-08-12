// 17413��: �ܾ� ������2
#include <iostream>
#include <stack>
#include <string>

using namespace std;
stack<char> words;


// ���ÿ��� ���ڿ��� ������ �Լ�
void Print(stack <char>& s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}


int main() {
	string line;
	getline(cin, line);

	bool tag = false; // tag�ȿ� �ִ��� �ƴ��� ���θ� Ȯ���ϱ� ���� ����

	for (char ch : line) { // for���� �� ���� ����� ���
		if (ch == '<') {
			Print(words); // <�� ������������ ���ÿ� �ִ� words�� ���
			tag = true; // ���� ���� ch���� tag �ȿ� ����
			cout << ch; // < ���
		}
		else if (ch == '>') {
			tag = false; // >�� ������ tag ����
			cout << ch; // > ���
		}
		else if (tag) { // tag�ȿ� �ִ� ��� �׳� ���
			cout << ch;
		}
		else { // tag ���� �ƴ� ���
			if (ch == ' ') { // ������ ������
				Print(words); // ������ ������ �������� stack�ȿ� �ִ� ���ڵ� ���
				cout << ch; // ���� ���
			}
			else
				words.push(ch); // tag���� �ƴ� ��� stack�� �־���
		}
	}

	// ���������� stack�� ����ִ� �ܾ �Ųٷ� ���
	Print(words);
	cout << '\n';

	return 0;
}