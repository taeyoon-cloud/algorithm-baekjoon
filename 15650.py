# 15650번: N과M(2)

n, m = map(int, input().split())

visited = [False] * (n+1)
result = []

temp = 0

def backTracking(num):
    if len(result) == m:
        print(*result)
        return
    
    for i in range(num, n+1):
        if not visited[i]:
            visited[i] = True
            result.append(i)
            backTracking(i+1)
            visited[i] = False
            result.pop()


backTracking(1)
