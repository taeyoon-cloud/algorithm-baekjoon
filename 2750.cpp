// 2750��: �� �����ϱ�
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N; // ���� ���� N
int num; // �Է¹޴� ��
vector<int> v; // ������ �����ϴ� ����
int main() {
	cin >> N;
	while (N--) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end()); // sort() -> <algorithm>�� ����� �Լ�, v�� ������������ ����

	vector<int>::iterator iter; // �ݺ���

	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << "\n";
	// �ݺ��ڴ� �����Ϳ� ����ϴ�.
	// �����̳��� ����� ���ҵ��� ��ġ�� ��Ÿ��
	// vector �Լ��� begin(), end()�� �ݺ��ڸ� �޾� ++, --�� ������ ���� �����̳� ���� ���Ҹ� ��ȸ����

	return 0;
}