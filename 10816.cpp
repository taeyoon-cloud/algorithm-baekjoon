// 10816��: ����ī�� 2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> vec;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m; // ���� ī���� ����, �� ���� �Է¹��� ������ ����
	int card; // �Է¹޴� ī��
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> card;
		vec.push_back(card);
	}

	sort(vec.begin(), vec.end()); // ���͸� ������������ ����
	cin >> m;
	int num; // �Է¹޴� ����
	for (int i = 0; i < m; i++) {
		cin >> num;
		cout << upper_bound(vec.begin(), vec.end(), num) - lower_bound(vec.begin(), vec.end(), num) << " ";
		// num���� ū ���ڰ� ó������ ������ ��ġ - num �̻��� ���ڰ� ó�� ������ ��ġ
		// = num�� ����
	}
	return 0;

}