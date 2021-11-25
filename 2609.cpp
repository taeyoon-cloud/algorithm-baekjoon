// 2609번: 최대공약수와 최소공배수
#include <iostream>

using namespace std;
// gcd = greatest common divisor(최대공약수)
int gcd(int a, int b) {
	if (a % b == 0) return b;

	return gcd(b, a % b);

}

int main() {
	int n1, n2; // 입력받는 수 2개
	cin >> n1 >> n2;
	// 만약 n1<n2일경우 두 수를 바꿔줌(큰 수가 먼저 와야됨)
	if (n1 < n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	cout << gcd(n1, n2) << endl; // 최대공약수
	cout << (n1 * n2) / gcd(n1, n2) << endl; // 최소공배수
	return 0;
}