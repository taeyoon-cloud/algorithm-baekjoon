# 2156번: 포도주 시식
n = int(input())

arr = [0]

for i in range(1, n+1):
    arr.append(int(input()))


dp = [0 for _ in range(10001)]

dp[0] = 0
if n >= 1:    
    dp[1] = arr[1]
if n >= 2:
    dp[2] = arr[1] + arr[2]



for i in range(3, n+1):
    dp[i] = max(dp[i-2] + arr[i], dp[i-3] + arr[i-1] + arr[i], dp[i-4] + arr[i-1] + arr[i])
    

print(max(dp))
