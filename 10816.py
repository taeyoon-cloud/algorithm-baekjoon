#10816번: 숫자 카드 2
import sys

n = int(sys.stdin.readline()) # 상근이가 가지고 있는 카드 N개
nlist = list(map(int, sys.stdin.readline().split())) # 상근이가 가진 카드들이 담겨있는 리스트
m = int(sys.stdin.readline()) # 검사하기 위한 카드 개수 N개
mlist = list(map(int, sys.stdin.readline().split()))


answer = dict()

for num in nlist: # 일단 상근이가 가지고 있는 카드의 개수를 answer딕셔너리에 저장
    if num not in answer:
        answer[num] = 1
    else:
        answer[num] += 1

for ans in mlist:
    if ans in answer: # 만약 mlist에 있는 카드의 숫자를 key값이라고 했을 때 키값에 해당하는 개수가
                      # answer 딕셔너리에 있을 경우 그 숫자를 출력
        print(answer[ans], end = ' ')
    else: # mlist에 있는 카드가 answer 딕셔너리에 없을 경우에는 0을 출력
        print(0, end=' ')

