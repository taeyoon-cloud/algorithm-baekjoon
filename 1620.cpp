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
	//���ϸ��� ��, ������ ��
	cin >> N>> M;
	map <string, int> poketmonsName; // ���ڿ� �������� ����
	map <int, string> poketmonsNum; // ���� �������� ����
	
	int num = 1; // ���ϸ��� ��ȣ
	
	for (int i = 0; i < N; i++) {
		string poketmon;
		cin >> poketmon;
		poketmonsName.insert(make_pair(poketmon, num));
		poketmonsNum.insert(make_pair(num++, poketmon));

	}
	for (int i = 0; i < M; i++) {
		string problem;
		cin >> problem;
		//�Է¹��� ���� ������ ���
		if (atoi(problem.c_str()) == 0)
		{
			cout << poketmonsName[problem] << '\n';
		}
		//�Է¹��� ���� ������ ���
		else
			cout << poketmonsNum[stoi(problem)] << '\n';
	}
	return 0;
}