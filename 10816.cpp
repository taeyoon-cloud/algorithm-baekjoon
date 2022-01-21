<<<<<<< HEAD
// 10816번: 숫자 카드 2
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> vec;
=======
// 10816번: 숫자카드 2
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

	int N, M; // 상근이가 가지고 있는 숫자 개수 N, 맞춰야할 숫자 카드의 개수 M
	int num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end()); // 오름차순 정렬

	cin >> M;
	int findNum;
	for (int i = 0; i < M; i++) {
		cin >> findNum;
		int cnt = upper_bound(vec.begin(), vec.end(), findNum) - lower_bound(vec.begin(), vec.end(), findNum);
		cout << cnt << "\n";
	}

=======
	
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
>>>>>>> d8767ae4ae60cf25d90ff35bdc18d17fb48c5b21
	return 0;

}