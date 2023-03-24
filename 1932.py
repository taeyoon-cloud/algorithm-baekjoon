# 1932번: 정수 삼각형
n = int(input()) # 정수 삼각형의 크기 n

dp = [[0 for _ in range(501)] for _ in range(501)] # 합이 최대가 되는 경로의 합을 저장하는 배열 dp -> 2차원 배열로 변환
arr = [[0 for _ in range(501)] for _ in range(501)] # 각 층의 수들을 저장하는 리스트 


# 각 층의 수들을 arr리스트에 대입
for i in range(1, n+1):
    temp = list(map(int, input().split()))
    for j in range(len(temp)):
        arr[i][j+1] = temp[j]

# 초기값 지정 -> 1층의 첫번째 값 -> arr[1][1]
dp[1][1] = arr[1][1]


# dp[i][j] = i번째 층의 j번째 숫자까지 오는 최댓값을 dp리스트에 저장
# 2층부터 dp리스트 갱신
for i in range(2, n+1):
    for j in range(1, i+1):
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + arr[i][j]


# 삼각형 왼쪽 끝, 오른쪽 끝, 그 외의 경우를 나눠서 dp 테이블 갱신
# for i in range(2, n+1):
#     for j in range(1, i+1):
#         if j == 1:
#             dp[i][j] = dp[i-1][j] + arr[i][j]
        
#         if j == i:
#             dp[i][j] = dp[i-1][j-1] + arr[i][j]

#         else:
#             dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + arr[i][j]


# n번째 층 dp 값들 중의 최댓값을 출력하면 그게 정답
print(max(dp[n]))

