// 17413번: 단어 뒤집기2
#include <iostream>
#include <stack>
#include <string>

using namespace std;
stack<char> words;


// 스택에서 문자열을 꺼내는 함수
void Print(stack <char>& s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}


int main() {
	string line;
	getline(cin, line);

	bool tag = false; // tag안에 있는지 아닌지 여부를 확인하기 위한 변수

	for (char ch : line) { // for문을 더 쉽게 만드는 방법
		if (ch == '<') {
			Print(words); // <가 나오기전까지 스택에 있던 words를 출력
			tag = true; // 이제 다음 ch부터 tag 안에 있음
			cout << ch; // < 출력
		}
		else if (ch == '>') {
			tag = false; // >가 나오면 tag 종료
			cout << ch; // > 출력
		}
		else if (tag) { // tag안에 있는 경우 그냥 출력
			cout << ch;
		}
		else { // tag 안이 아닌 경우
			if (ch == ' ') { // 공백이 나오면
				Print(words); // 공백이 나오기 전까지의 stack안에 있던 문자들 출력
				cout << ch; // 공백 출력
			}
			else
				words.push(ch); // tag안이 아닐 경우 stack에 넣어줌
		}
	}

	// 마지막으로 stack에 들어있는 단어를 거꾸로 출력
	Print(words);
	cout << '\n';

	return 0;
}