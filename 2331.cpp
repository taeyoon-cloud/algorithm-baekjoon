// 2331��: �ݺ�����
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int a, p;
int num; // 
int result; // ����Ʈ�� ���� �ִ� ���ڸ� ����� �����
vector<int> arr; // ��갪�� �����ϴ� �迭

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> p;
	arr.push_back(a); // ù��° ���ڸ� ����Ʈ�� ����
	num = a;
	while (true) {
		result = 0;
		// temp_num�� ���� �� �ڸ����� ���� �� �ְ�, num�� ���� �� ���� �ڸ����� �Ѿ �� ����
		int temp_num = num;
		while (num != 0) {
			temp_num = num % 10;
			num = num / 10;
			result += pow(temp_num, p);
		}
		num = result;

		// ���� ���� result���� ���� �ȿ� �ִ� ��쿡 while�� ����
		if (find(arr.begin(), arr.end(), result) != arr.end()) break;
		// �׷��� ���� ��쿡�� result�� ���Ϳ� ����
		else arr.push_back(result);


	}
	// ���� result���� ó�� ������ index�� �ݺ��Ǵ� �κ��� �������� ��, ������ ���� �Ǵ� ������ ����.
	cout << find(arr.begin(), arr.end(), num) - arr.begin() << "\n";


}