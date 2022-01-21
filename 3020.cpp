// 3020번: 개똥벌레
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec_bottom; // 석순
vector<int> vec_top; // 종유석

const int INF = 1000000;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, H;
	cin >> N >> H;
	vector<int> vec_bottom; // 석순
	vector<int> vec_top; // 종유석

	for (int i = 0; i < N; i++) {
		int height;
		cin >> height;
		if (i % 2 == 0)
			vec_bottom.push_back(height);
		else
			vec_top.push_back(height);
	}


	sort(vec_bottom.begin(), vec_bottom.end());
	sort(vec_top.begin(), vec_top.end());


	int result = INF;
	int cnt = 1;
	for (int i = 1; i <= H; i++) {
		int temp = vec_bottom.size() - (lower_bound(vec_bottom.begin(), vec_bottom.end(), i) - vec_bottom.begin());
		temp += vec_top.size() - (upper_bound(vec_top.begin(), vec_top.end(), H - i) - vec_top.begin());

		if (result == temp)
			cnt++;
		else if (result > temp) {
			result = temp;
			cnt = 1;
		}


	}

	cout << result << " " << cnt << "\n";

	return 0;

}