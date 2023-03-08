# 15652번: N과 M(4)

n, m = map(int, input().split())

result = []
def backTracking(num):
    if len(result) == m:
        print(*result)
        return
    
    for i in range(num, n+1):
            result.append(i)
            backTracking(i)
            result.pop()

backTracking(1)


