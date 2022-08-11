// 1260��: DFS�� BFS
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool visited_dfs[1001];
bool visited_bfs[1001];
vector<int> vec_dfs[10001];
vector<int> vec_bfs[10001];

void dfs(int x);
void bfs(int start);
void addEdge(int start, int end);

void dfs(int x) {
	visited_dfs[x] = true;
	cout << x << " ";
	sort(vec_dfs[x].begin(), vec_dfs[x].end());
	// �湮�Ҽ� �ִ� ������ ������ �ΰ�� ���� ��ȣ�� ���� ���� ���� �湮�ؾ��ϹǷ� �������ش�.
	for (int i = 0; i < vec_dfs[x].size(); i++)
		if (!visited_dfs[vec_dfs[x][i]]) dfs(vec_dfs[x][i]);
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited_bfs[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";
		sort(vec_bfs[x].begin(), vec_bfs[x].end());
		// �湮�Ҽ� �ִ� ������ ������ �ΰ�� ���� ��ȣ�� ���� ���� ���� �湮�ؾ��ϹǷ� �������ش�.
		for (int i = 0; i < vec_bfs[x].size(); i++) {
			if (!visited_bfs[vec_bfs[x][i]]) {
				q.push(vec_bfs[x][i]);
				visited_bfs[vec_bfs[x][i]] = true;
			}
		}
	}
}

void addEdge(int start, int end) {
	vec_dfs[start].push_back(end);
	vec_dfs[end].push_back(start);
	vec_bfs[start].push_back(end);
	vec_bfs[end].push_back(start);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v; // ������ ���� n, ������ ���� m, Ž�� ������ ������ ��ȣ v
	int start, end; // �Է¹��� ������ ������� ������

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		cin >> start >> end;
		addEdge(start, end); // ���� �߰�
	}

	dfs(v);
	cout << "\n";
	bfs(v);

	return 0;
}