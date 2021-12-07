// 2750번: 수 정렬하기
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N; // 수의 개수 N
int num; // 입력받는 수
vector<int> v; // 수들을 저장하는 벡터
int main() {
	cin >> N;
	while (N--) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end()); // sort() -> <algorithm>에 내장된 함수, v를 오름차순으로 정렬

	vector<int>::iterator iter; // 반복자

	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << "\n";
	// 반복자는 포인터와 비슷하다.
	// 컨테이너의 저장된 원소들의 위치를 나타냄
	// vector 함수로 begin(), end()로 반복자를 받아 ++, --로 증감을 통해 컨테이너 내의 원소를 순회가능

	return 0;
}