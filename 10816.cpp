// 10816번: 숫자카드 2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> vec;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m; // 숫자 카드의 개수, 그 다음 입력받을 숫자의 개수
	int card; // 입력받는 카드
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> card;
		vec.push_back(card);
	}

	sort(vec.begin(), vec.end()); // 벡터를 오름차순으로 정렬
	cin >> m;
	int num; // 입력받는 숫자
	for (int i = 0; i < m; i++) {
		cin >> num;
		cout << upper_bound(vec.begin(), vec.end(), num) - lower_bound(vec.begin(), vec.end(), num) << " ";
		// num보다 큰 숫자가 처음으로 나오는 위치 - num 이상의 숫자가 처음 나오는 위치
		// = num의 개수
	}
	return 0;

}