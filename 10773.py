# 10773번: 제로
import sys

stack = [] # 정수를 저장하기 위한 스택

count = int(sys.stdin.readline()) # 정수 개수

while count > 0:
    num = int(sys.stdin.readline())
    if num == 0:
        stack.pop() # 입력받은 정수가 0일경우 pop()
    else:
        stack.append(num) # 0이 아닐경우 입력받은 정수 push
    count -= 1

print(sum(stack))
