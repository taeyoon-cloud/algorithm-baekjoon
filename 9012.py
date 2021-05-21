# 9012번: 괄호
import sys

count = int(sys.stdin.readline()) # 테스트 데이터 개수
answer = []
while count > 0:
    line = sys.stdin.readline().rstrip() # 입력받는 문자열
    stack = [] # 파이썬은 리스트로 스택을 흉내냄
    stack.append(line[0])
    for i in range(1, len(line)):
        stack.append(line[i]) # 리스트의 append메소드를 이용해 스택에 push를 해줌
        if stack[-1] == ")" and "(" in stack: # stack의 top이 )이고 stack에 (가 있을 경우
            stack.pop() # (, ) 세트를 pop해준다.
            stack.pop()
    if len(stack) == 0: # stack이 비어있을 경우 vps
        answer.append("YES")
    else:
        answer.append("NO") # stack이 비어있지 않을 경우 vps가 아님
    count -= 1

for ans in answer:
    print(ans)