# 1260번: DFS와 BFS
from collections import deque # 큐를 구현하기 위한 리이브러리 import

n, m, v = map(int, input().split()) # 정점 개수 n, 간선 개수 m, 정점 번호 v

graph = [[] for _ in range(n+1)]
visited_dfs = [False] * (n+1) # dfs에서의 방문 여부를 확인하기 위한 리스트
visited_bfs = [False] * (n+1) # bfs에서의 방문 여부를 확인하기 위한 리스트

# 인접 리스트 추가
for i in range(m):
    x, y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)

# 작은 정점부터 방문하기 위해
for i in range(1, n+1):
    graph[i].sort()


def dfs(graph, v, visited):
    visited[v] = True
    print(v, end= ' ')

    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)

def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True

    while queue:
        v = queue.popleft()
        print(v, end=' ')

        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True


dfs(graph, v, visited_dfs)
print()
bfs(graph, v, visited_bfs)
