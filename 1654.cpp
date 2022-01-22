	// 1620번: 랜선 자르기
	#include <iostream>
	#include <vector>
	#include <algorithm>

	using namespace std;

	vector<long long> vec; // 랜선의 길이를 입력받기 위한 벡터(랜선의 길이가 2^31-1이하이므로 long long 사용)

	long long mid;
	
	int main() {

		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int K, N;
		cin >> K >> N;

		long long line; // 입력받는 랜선길이

		for (int i = 0; i < K; i++) {
			cin >> line;
			vec.push_back(line);
			
		}
	
		long long left = 1;
		long long right = *max_element(vec.begin(), vec.end()); // 2^31 -1로 해도 됨

		while (left <= right) {
			int total = 0; // 랜선 개수 (N과 같아야함)
			mid = (left + right) / 2;
			for (int i = 0; i < K; i++) {
				long long line = vec[i] / mid;
				total += line;
			}
		
			if (total >= N) left = mid + 1;
			// total이 N이상일 경우 자르는 랜선의 길이를 늘려야 한다.
			// N과 같은 경우에도 랜선을 더 만들수 있으므로 랜선의 길이를 늘려본다.
			else right = mid - 1;
			// total이 N보다 작은 경우에는 랜선의 길이를 줄여야한다.
		}

		cout << right << "\n";

		return 0;

	}