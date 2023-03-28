# 11053번: 가장 긴 증가하는 부분수열
n = int(input()) # 수열 길이
dp = [1 for _ in range(1001)] # dp테이블 -> dp[i]: i번째 수로 끝나는 증가하는 부분수열의 길이
arr = list(map(int, input().split()))

for i in range(n):
    for j in range(i):
        if arr[i] > arr[j]:
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))