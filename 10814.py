# 10814번: 나이순 정렬
import sys

num = int(input()) # 사람 수
people = [] # 사람을 저장하는 리스트
while num:
    age, name = sys.stdin.readline().rstrip().split()
    people.append([age, name])
    num -= 1

people.sort(key = lambda x:int(x[0])) # 나이를 기준으로 정렬

for person in people:
    print(person[0], person[1]) # 출력