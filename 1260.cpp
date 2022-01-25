// 1260번: DFS와 BFS
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
	// 방문할수 있는 정점이 여러개 인경우 정점 번호가 작은 것을 먼저 방문해야하므로 정렬해준다.
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
		// 방문할수 있는 정점이 여러개 인경우 정점 번호가 작은 것을 먼저 방문해야하므로 정렬해준다.
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

	int n, m, v; // 정점의 개수 n, 간선의 개수 m, 탐색 시작할 정점의 번호 v
	int start, end; // 입력받을 간선의 출발점과 시작점

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		cin >> start >> end;
		addEdge(start, end); // 간선 추가
	}

	dfs(v);
	cout << "\n";
	bfs(v);

	return 0;
}