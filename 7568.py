# 7568번: 덩치
import sys

num = int(input()) # 사람 수
tmp = num # 사람 수를 저장하기 위한 임시변수 tmp
weight = [] # 몸무게를 저장하는 리스트
height = [] # 키를 저장하는 리스트
grade = [] # 등수를 저장하는 리스트
while num:
    a, b = map(int, sys.stdin.readline().rstrip().split())
    weight.append(a)
    height.append(b)
    num -= 1

for i in range(tmp):
    grade.append(1)
    for j in range(tmp):
        if weight[i] < weight[j] and height[i] < height[j]: # 몸무게와 키가 모두 비교하는 사람보다 작을 경우
            grade[i] += 1
    print(grade[i], end = ' ')
