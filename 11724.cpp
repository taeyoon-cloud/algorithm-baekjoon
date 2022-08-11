// 11724��: ���� ����� ����
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[1001];
vector<int> vec[1001];
int answer; // ���� ����� ����

void dfs(int x) {
	visited[x] = true;
	for (int i = 0; i < vec[x].size(); i++)
		if (!visited[vec[x][i]]) dfs(vec[x][i]);
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < vec[x].size(); i++) {
			if (!visited[vec[x][i]]) {
				q.push(vec[x][i]);
				visited[vec[x][i]] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, u, v; // ���� ���� n, ���� ���� m, ������ �糡�� u,v
	
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) { 
			// �ѹ� dfs(bfs)�� ������ �� �Ŀ� �湮���� ���� ������ �������� 
			// dfs(bfs)�� ������ �������� ������ ����.
			bfs(i);
			//dfs(i);
			answer++;
		}
	}

	cout << answer;
	return 0;

}