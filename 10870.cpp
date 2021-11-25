#include <iostream>

using namespace std;

int fibo(int n) {
	if (n == 0) return 0; // 기저 조건
	else if (n == 1) return 1; // 기저 조건

	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int num;
	cin >> num;
	cout << fibo(num) << endl;
	return 0;
}