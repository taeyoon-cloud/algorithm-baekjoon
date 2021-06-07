# 1654번: 랜선 자르기
import sys

k, n = map(int, sys.stdin.readline().split())
lanList = [int(sys.stdin.readline()) for _ in range(k)]
# 이미 가지고 있는 랜선을 저장하는 리스트

start = 1
end = sum(lanList) // n
while start <= end:
    mid = (start + end) // 2
    sum = 0
    for lan in lanList:
        sum += lan // mid
    if sum >= n: # mid길이로 만든 랜선의 개수가 n보다 클 경우 랜선의 길이를 늘려야함
        start = mid + 1
    else: # mid길이로 만든 랜선의 길이가 n보다 작을 경우 랜선의 길이를 줄여야함
        end = mid - 1

print(end)
# 만약 start와 end가 같아질 경우 조건을 만족시키는 최대의 랜선길이를 찾은 것!




