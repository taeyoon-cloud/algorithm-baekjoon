# 2164번: 카드2
import sys
from collections import deque

count = int(sys.stdin.readline()) # 카드 개수
dq = deque([])
for i in range(1, count+1):
    dq.append(i)

while len(dq) > 1:
    dq.popleft()
    dq.append(dq.popleft())

print(dq[0])