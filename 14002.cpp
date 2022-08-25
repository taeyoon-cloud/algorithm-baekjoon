// 14002��: ���� �� �����ϴ� �κ� ���� 4
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// ���� arr�� ũ�� n
int n;
// �־��� ����
int arr[1001];
// ���� �� �����ϴ� �κ� ������ �����ϱ� ���� ����
vector<int> vec;
// dp ���̺�
int dp[1001];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[i] = x;
	}

	fill(dp, dp + 1001, 1);
	

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	

	int length = *max_element(dp, dp + 1001);
	cout << length << "\n";
	
	for (int i = n-1; i >= 0; i--) {
		if (dp[i] == length) {
			vec.push_back(arr[i]);
			length--;
		}
	}

	for (int i = vec.size() - 1; i >= 0; i--) {
		cout << vec[i] << " ";
	}



	
}