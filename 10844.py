# 10844번: 쉬운 계단 수
 
n = int(input()) # 자리수
dp = [[0] * 10 for _ in range(101)] # dp 테이블
# dp[n][i] -> n자리의 계단 수 중 i로 끝나는 계단수의 개수

dp[1] = [0, 1, 1, 1, 1, 1, 1, 1, 1, 1]
# 1자리수 계단수 초기화


for i in range(2, n+1):
    for j in range(10):
        if j == 0:
            dp[i][0] = dp[i-1][1]
        elif j == 9:
            dp[i][9] = dp[i-1][8]
        else:
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]


print(sum(dp[n])%1000000000)