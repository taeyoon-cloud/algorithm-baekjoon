# 11724번: 연결 요소의 개수
n, m = map(int, input().split()) # 정점 개수 n, 간선 개수 m
graph = [[] for _ in range(n+1)] # 무방향 그래프
visited = [False for _ in range(n+1)]

for i in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)


count = 0 # 연결 요소의 개수

def dfs(x):
    visited[x] = True # 방문 처리
    for i in graph[x]: # x에 인접한 노드 중에서
        if not visited[i]: # 방문하지 않은 노드가 있다면
            dfs(i) # 해당 노드 탐색



for i in range(1, n+1):
    if not visited[i]: # 방문하지 않은 노드에 대해 dfs를 돌리고, dfs를 돌린 후, count + 1
        dfs(i)
        count += 1

print(count)