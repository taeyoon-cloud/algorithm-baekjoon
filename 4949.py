# 4949번: 균형잡힌 세상
# 스택 활용
import sys

answer = [] # 답을 저장하는 리스트
while True:
    stack = [] # 괄호를 저장하는 스택

    line = sys.stdin.readline()
    if line.rstrip() == ".": # .이 입력되면 입력 종료
        break

    for letter in line:
        if letter == "(" or letter == ")" or letter == "[" or letter == "]":
            if stack and letter == ")" and stack[-1] == "(":
                # stack에 괄호가 있고 입력하려는 괄호가 )이고 stack의 top이 (일경우
                stack.pop() # (을 꺼낸다.
            elif stack and letter == "]" and stack[-1] == "[":
                # stack에 괄호가 있고 입력하려는 괄호가 ]이고 stack의 top이 [일경우
                stack.pop() # [을 꺼낸다.
            else:
                stack.append(letter) # 위 두가지 경우가 아닌경우 stack에 괄호를 push한다.

    if len(stack) == 0:
        answer.append("yes")
    else:
        answer.append("no")

for ans in answer:
    print(ans)