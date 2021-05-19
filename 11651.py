# 11651번: 좌표 정렬하기 2
import sys

count = int(sys.stdin.readline()) # 입력받는 좌표 개수
numlist = [] # 입력받는 좌표를 입력하는 리스트
for i in range(count):
    x, y = map(int, sys.stdin.readline().split())
    numlist.append([x, y])

sortedlist = sorted(numlist, key = lambda x: (x[1], x[0]))

for num in sortedlist:
    print(num[0], num[1])