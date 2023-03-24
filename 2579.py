# 2579번: 계단 오르기
n = int(input()) # 계단의 개수
dp = [0] * 301 # dp 테이블
arr = [0]


for _ in range(n):
    arr.append(int(input()))

dp[1] = arr[1]
if n >= 2: # n이 1인 경우, arr[2]에 접근할 수 없어 런타임 에러 발생
    dp[2] = arr[1] + arr[2]

for i in range(3, n+1):
    dp[i] = max(dp[i-3] + arr[i-1] + arr[i], dp[i-2] + arr[i])


print(dp[n])




