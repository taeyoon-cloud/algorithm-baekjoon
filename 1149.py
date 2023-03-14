# 1149번: RGB거리
n = int(input())

dp = [[0 for _ in range(1001)] for _ in range(1001)]
arr = []

for i in range(n):
    r, g, b = map(int, input().split())
    arr.append((r, g, b))


for i in range(n):
    dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0]
    dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1]
    dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + arr[i][2]

print(min(dp[n-1][0], dp[n-1][1], dp[n-1][2]))

