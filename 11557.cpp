// 11557��: Yangjogang of The Year
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

map<string, int> school; // �б��� �̸��� �� �ص��� �Һ��� ���� ���� �����ϴ� map
vector<pair<string, int>> vec(school.begin(), school.end());
// map�� value������ ������ �ϰ� ������ map�� vector�� ��ȯ�� �� vector���� ������ �ϴ� �� ó�� ���ش�.

int T; // �׽�Ʈ ���̽�
int N; // �б��� ��
string S; // �б� �̸�
int L; // �Һ��� ���� ��

//map�� value��, �� vector�� �ι�° ������ ������ ���� ���̱� ������ ���� ���Լ��� ���������Ѵ�.
bool cmp(pair<string, int>& a, pair<string, int>& b) {
	if (a.second == b.second) return a.second < b.second;
	return a.second < b.second;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// vector<pair<string, int>>::iterator iter; // �ݺ���

	cin >> T; // �׽�Ʈ ���̽�
	while (T--) {
		cin >> N; // �б��� ��
		while (N--) {
			cin >> S >> L; // �б� �̸��� �Һ��� ���� �� �Է�
			school[S] = L; // �б��̸��� key��, �Һ��� ���� ���� value�� �Է�
		}
		vector<pair<string, int>> vec(school.begin(), school.end()); //map�� vector�� ��ȯ
		sort(vec.begin(), vec.end(), cmp); // �ռ� ���� cmp�Լ��� �̿��ؼ� value�� �������� ��������
		cout << vec.back().first << "\n"; // ���������̹Ƿ� ���� ū ���� vector�� back�� �ִ�.

	}
	return 0;
}