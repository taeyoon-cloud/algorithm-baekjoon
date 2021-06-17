# 18111번: 마인크래프트

import sys

n, m, b = map(int, sys.stdin.readline().split())
# n: 세로 / m: 가로 / b: 처음 인벤토리에 있는 블록 개수

block = [[int(x) for x in sys.stdin.readline().split()] for _ in range(n)]
#블록의 땅높이를 저장

minimum = min(map(min, block))
maximum = max(map(max, block))
#초기 블록 높이의 최솟값 <= 블록 높이 <= 초기 블록 높이의 최댓값

minTime = 100000000000000000
for i in range(minimum, maximum + 1):
    plus = 0 # 블록을 추가 하는 횟수
    minus = 0 # 블록을 제거 하는 횟수
    for j in range(n):
        for k in range(m):
            height = block[j][k] - i
            if height > 0: #블록을 제거해야하는 경우
                minus += height
            elif height < 0: # 블록을 추가해야 하는 경우
                plus -= height # height값이 -이므로 -을 붙여서 +로 만들어줌
    if minus+b >= plus:
        time = minus*2 + plus
        if minTime >= time:
            minTime = time
            resultHeight = i

print(minTime, resultHeight)