# 11650번: 좌표 정렬하기
import sys

count = int(sys.stdin.readline()) # 좌표 개수
xylist = [] # 좌표들을 저장하는 리스트

for i in range(count):
    x, y = map(int, sys.stdin.readline().split()) # 좌표 입력
    xylist.append([x, y]) # 좌표를 입력받아서 리스트에 추가

sortedlist = sorted(xylist, key = lambda x: (x[0], x[1]))
# x좌표로 먼저 정렬하고, 그 후에 y좌표로 정렬

for num in sortedlist:
    print(num[0], num[1]) # 답 출력