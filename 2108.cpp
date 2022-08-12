// 2108번: 통계학
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n; // 숫자 개수
vector<int> arr; // 숫자를 저장하는 벡터
int arr_b[8001]; // 입력값에서 +4000한것이 index가 된다.


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

	// 1. 산술평균
	double total = 0;
	for (int i = 0; i < n; i++)
		total += arr[i];
	double avg = total / n;
	cout << floor(avg+0.5) << "\n"; // 반올림

	// 2. 중앙값
	sort(arr.begin(), arr.end());
	cout << arr[arr.size() / 2] << "\n";

	// 3. 최빈값
	int max_value = *max_element(arr_b, arr_b + 8001); // 최빈값이 몇개 나오는지 개수
	int cnt = 0; // 최빈값이 여러인 경우 두 번째로 작은 값을 출력하기 위한 개수를 저장하는 변수
	// 음수
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


	// 4. 범위
	cout << *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end()) << "\n";

	


}