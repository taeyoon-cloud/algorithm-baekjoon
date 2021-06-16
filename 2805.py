# 2805번: 나무 자르기
import sys

num, length = map(int, sys.stdin.readline().split()) #나무 개수, 가져가야 할 나무 길이
treeList = list(map(int, sys.stdin.readline().split())) # 나무들의 길이가 저장된 리스트

start = 0
end = max(treeList)
while start <= end:
    total = 0
    mid = (start + end) // 2
    for tree in treeList:
        if tree >= mid:
            total += (tree - mid)
        if total > length: # 이미 length를 넘어가면 루프를 돌 필요가 없음
            break
    if total < length: # H의 길이를 낮춰야함
        end = mid - 1
    elif total >= length: # H의 길이를 높여야 함
        start = mid + 1
print(end)