#1377번: 버블 소트

import sys

length = int(input())

numlist = []

i = 0
for i in range(length):
    num = int(sys.stdin.readline())
    numlist.append((num, i)) # 이차원 배열에 값과 그 값에 들어간 인덱스를 저장
sortedlist = sorted(numlist)

maxim = 0
for i in range(length):
    maxim = max(maxim, sortedlist[i][1] - i) # 앞으로 제일 많이 움직인 인덱스 + 1이 답

print(maxim+1)