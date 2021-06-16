# 1966번: 프린터 큐

import sys

case = int(sys.stdin.readline()) # 테스트 케이스 개수
while case:
    count, index = map(int, sys.stdin.readline().split())
    # count = 문서 개수, target = 몇번째로 인쇄되었는지 찾아야하는 문서
    queue = list(map(int, sys.stdin.readline().split())) # 문서 중요도 입력받음
    tmplist = list(range(len(queue)))
    tmplist[index] = "target"
    order = 0  # 문서가 출력되는 순서
    while True:
        if queue[0] == max(queue): # queue의 첫번째 문서가 중요도 최대일 경우
            order += 1 # 문서 출력순서에 +1

            if tmplist[0] == "target": # 만약 출력되는 문서가 target일 경우
                print(order) # 순서를 출력하고 종료
                break
            else:
                queue.pop(0) # 출력되는 문서가 target이 아닌 경우
                tmplist.pop(0) # 큐에서 그냥 제거
        else:
            queue.append(queue.pop(0)) # queue의 첫번째 문서가 중요도 최대가 아닐 경우
            tmplist.append(tmplist.pop(0)) # 첫번째 문서를 맨 뒤로 보냄
    case -= 1