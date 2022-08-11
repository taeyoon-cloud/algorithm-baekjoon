// 2331번: 반복수열
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int a, p;
int num; // 
int result; // 리스트에 집어 넣는 숫자를 계산한 결과값
vector<int> arr; // 계산값을 저장하는 배열

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> p;
	arr.push_back(a); // 첫번째 숫자를 리스트에 넣음
	num = a;
	while (true) {
		result = 0;
		// temp_num을 통해 각 자리수를 구할 수 있고, num을 통해 그 다음 자리수로 넘어갈 수 있음
		int temp_num = num;
		while (num != 0) {
			temp_num = num % 10;
			num = num / 10;
			result += pow(temp_num, p);
		}
		num = result;

		// 만약 구한 result값이 벡터 안에 있는 경우에 while문 종료
		if (find(arr.begin(), arr.end(), result) != arr.end()) break;
		// 그렇지 않은 경우에는 result를 벡터에 넣음
		else arr.push_back(result);


	}
	// 구한 result값이 처음 나오는 index가 반복되는 부분을 제외했을 때, 수열에 남게 되는 수들의 개수.
	cout << find(arr.begin(), arr.end(), num) - arr.begin() << "\n";


}