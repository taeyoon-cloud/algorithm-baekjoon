# 2667번: 단지 번호 붙이기
n = int(input()) # 지도의 크기(n x n)
graph = [] # 지도
visited = [[False] * n for _ in range(n)] # 방문 여부를 확인하기 위한 2차원 리스트

for i in range(n):
    graph.append(list(map(int,input())))

count = 0 # 총 단지수
home_list = [] # 각 단지별 집의 수

# 상, 하, 좌, 우로 이동
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

global temp # 각 단지에 속하는 집의 수를 저장하기 위한 변수
temp = 0

def dfs(x, y):
    visited[x][y] = True
    global temp
    temp += 1 # 해당 단지에 속한 집의 수 + 1

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        # 지도 범위를 넘어갈 경우 다음으로 넘어감
        if nx < 0 or nx >= n or ny < 0 or ny >= n:
            continue
        # 집이 없는 곳일 경우 다음으로 넘어감
        if graph[nx][ny] == 0:
            continue
        
        if not visited[nx][ny]:
            dfs(nx, ny)



for i in range(n):
    for j in range(n):
        if not visited[i][j] and graph[i][j] == 1:
            dfs(i, j)

            # 탐색이 끝나면
            count += 1 # 단지 수 1 증가
            home_list.append(temp) # 해당 단지에 속해 있는 집의 수를 저장하는 리스트에 집의 수 추가
            temp = 0 # 다시 다른 단지를 탐색하기 전 temp를 0으로 초기화해서 집의 수를 다시 셀 수 있도록 함


print(count)
for homes in sorted(home_list):
    print(homes)