// 2108��: �����
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n; // ���� ����
vector<int> arr; // ���ڸ� �����ϴ� ����
int arr_b[8001]; // �Է°����� +4000�Ѱ��� index�� �ȴ�.


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
		arr_b[x + 4000]++;
		
	}

	// 1. ������
	double total = 0;
	for (int i = 0; i < n; i++)
		total += arr[i];
	double avg = total / n;
	cout << floor(avg+0.5) << "\n"; // �ݿø�

	// 2. �߾Ӱ�
	sort(arr.begin(), arr.end());
	cout << arr[arr.size() / 2] << "\n";

	// 3. �ֺ�
	int max_value = *max_element(arr_b, arr_b + 8001); // �ֺ��� � �������� ����
	int cnt = 0; // �ֺ��� ������ ��� �� ��°�� ���� ���� ����ϱ� ���� ������ �����ϴ� ����
	// ����
	int index = 0;
	int temp = 0;
	//cout << max_value << "\n";
	while (true) {
		//cout << index << "  " << cnt << "\n";
		if (arr_b[index] == max_value) {
			cnt++;
			temp = index;
		}
		//cout << cnt << "abab\n";
		if (cnt == 2) {
			cout << index - 4000 << "\n";
			break;
		}
		if (index == 8000 && cnt == 1) {
			cout << temp - 4000 << "\n";
			break;
		}
			
		//cout << index << "  " <<  cnt << "\n";
		index++;
		//cout << index << "  " << cnt << "\n";

	}


	// 4. ����
	cout << *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end()) << "\n";

	


}