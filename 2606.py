# 바이러스
from collections import deque

n = int(input()) # 컴퓨터 수
m = int(input()) # 연결된 컴퓨터 쌍 수
graph = [[] for _ in range(n+1)] # 연결된 컴퓨터 쌍을 저장하는 리스트
visited = [False for _ in range(n+1)]

for i in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

global count
count = 0 # 연결되어있는 컴퓨터 쌍 수

# 1. dfs 풀이
def dfs(v):
    visited[v] = True
    global count
    count += 1

    for i in graph[v]:
        if not visited[i]:
            dfs(i)

# 2. bfs 풀이
def bfs(start):
    queue = deque([start])
    visited[start] = True

    while queue:
        v = queue.popleft()
        global count
        count += 1
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True



bfs(1)
# dfs(1)

print(count-1) # 1번 컴퓨터는 빼야지
