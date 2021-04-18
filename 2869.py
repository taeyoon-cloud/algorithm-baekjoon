#2869번: 달팽이는 올라가고 싶다

import sys
import math

up, down, height = map(int, sys.stdin.readline().split())

day = (height - up) / (up - down) + 1

print(math.ceil(day))

# math.ceil(day) -> 올림 함수
# day 값 이상의 첫번째 정수가 답

