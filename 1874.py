#1874번: 스택 수열
import sys

pushPopList = [] # + - 를 저장하는 리스트
count = int(sys.stdin.readline()) # 숫자 개수
checkList = [int(sys.stdin.readline()) for _ in range(count)]
answerList = [] # checkList수열을 만들기 위한 빈 리스트
stack = [0] # stack[-1] 조건문에서 index out of range가 뜨지 않도록 0을 넣어준다.
index = 0 # 반복문을 돌기위한 변수
num = 1 # 스택에 추가할 수 num

while len(answerList) < count: # answerList이 모두 만들어지면 반복문 탈출
    if stack[-1] > checkList[index]:
        # 스택의 top이 만들어야할 checkList[index]보다 큰 경우 checkList를 만들 수 X
        # 스택에는 num들이 오름차순으로 들어기 때문에
        print("NO")
        break
    elif stack[-1] != checkList[index]:
        # stack의 top과 checkList[index]가 다른 경우(더 작은 경우) stack에 num을 push해준다.
        # 그리고 num에 +1
        stack.append(num)
        pushPopList.append("+")
        num += 1
    else:
        # stack의 top과 checkList[index]가 같은 경우 stack에서 pop한 수를 answerList에 push해준다.
        # index에 +1을 해주어서 checkList의 다음수를 탐색한다.
        answerList.append(stack.pop())
        pushPopList.append("-")
        index += 1

if len(answerList) == count: # 만약 answerList가 다 만들어졌을 경우에만 + - 부호를 출력한다.
    for ans in pushPopList:
        print(ans)