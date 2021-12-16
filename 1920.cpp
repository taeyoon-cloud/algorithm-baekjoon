// 1290��: �� ã��
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002];

int binarySearch(int target, int left, int right) { // ��ͷ� ����
	int mid = (left + right) / 2;
	if (left > right) return 0;
	if (target > arr[mid])
		return binarySearch(target, mid + 1, right);
	else if (target < arr[mid])
		return binarySearch(target, left, mid - 1);
	else return 1;
	
}

int binarySearch2(int target, int left, int right) { // �ݺ������� ����
	while (left <= right) {
		int mid = (left + right) / 2;
		if (target < arr[mid])
			right = mid - 1;
		else if (target > arr[mid])
			left = mid + 1;
		else return 1;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m; // �ڿ����� ��
	int num; // �迭�� �ִ� Ȯ���� ������ ���� �����ϴ� ����
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr,arr+n); // ������������ �����ؾ� ����Ž���� �� �� ����

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		cout << binarySearch2(num, 0, n-1) << "\n";
	}
	return 0;


}