// 1380��: �Ͱ���
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int n;// �л��� ��
	int count = 1;
	int a;
	char b;

	while (true) {
		cin >> n;
		if (n == 0) break;
		getchar(); // cin���� ���ڸ� �ް� ���ڸ� ���� ���� ���� ���� �뵵�� getchar()�� �������
		string students[102]; // �л��� ���� �����ϴ� string �迭
		vector<char> vec[102]; // �л��� ��� üũ �Ǿ����� �����ϴ� vector

		for (int i = 1; i <= n; i++)
			getline(cin, students[i], '\n'); // �л� �̸� �Է�(�� ���� �� ����)
		for (int i = 1; i <= 2 * n - 1; i++) {
			cin >> a >> b;
			vec[a].push_back(b);
		}
		for (int i = 1; i <= n; i++)
			if (vec[i].size() == 1) cout << count++ << " " << students[i] << "\n";
		//������ ����� 1�̶�� �Ͱ��̸� �����ϰ� ���� ���� ��
	}
	return 0;
}