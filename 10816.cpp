<<<<<<< HEAD
// 10816��: ���� ī�� 2
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> vec;
=======
// 10816��: ����ī�� 2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> vec;

>>>>>>> d8767ae4ae60cf25d90ff35bdc18d17fb48c5b21
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
<<<<<<< HEAD

	int N, M; // ����̰� ������ �ִ� ���� ���� N, ������� ���� ī���� ���� M
	int num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end()); // �������� ����

	cin >> M;
	int findNum;
	for (int i = 0; i < M; i++) {
		cin >> findNum;
		int cnt = upper_bound(vec.begin(), vec.end(), findNum) - lower_bound(vec.begin(), vec.end(), findNum);
		cout << cnt << "\n";
	}

=======
	
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
>>>>>>> d8767ae4ae60cf25d90ff35bdc18d17fb48c5b21
	return 0;

}