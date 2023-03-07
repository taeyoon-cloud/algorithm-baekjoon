# 15651번: N과M(3)

n, m = map(int, input().split())

result = []

def backTracking(num):
    if num == m:
        print(*result)
        return

    for i in range(1, n+1):
        result.append(i)
        backTracking(num+1)
        result.pop()

backTracking(0)


