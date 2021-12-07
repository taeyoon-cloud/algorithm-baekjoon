// 1158��: �似Ǫ�� ����
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, K; // ����� ��, K
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		v.push_back(i); // 1~N������ ���

	int pos = 0; // ����� index�� �����ϴ� ����
	cout << "<";
	while (!v.empty()) {
		pos = (pos + (K - 1)) % v.size(); //������ �Ǿ������Ƿ� 
		cout << v[pos]; // ���
		v.erase(v.begin() + pos); //����� ���ڴ� vector���� ����
		if (v.size() == 0) cout << ">" << "\n";
		else cout << ", ";
	}

	return 0;
}