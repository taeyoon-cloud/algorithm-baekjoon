# 1912번: 연속합
n = int(input())
arr = list(map(int, input().split()))

dp = [-1001] * 100001

dp[1] = arr[0]
temp = dp[1]

for i in range(2, n+1):
    dp[i] = max(arr[i-1], dp[i-1] + arr[i-1])
    if temp < dp[i]:
        temp = dp[i]

print(temp)

