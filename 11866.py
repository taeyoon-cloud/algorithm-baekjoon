# 11866번: 요세푸스 문제 0
import sys

n,k = map(int, sys.stdin.readline().split())
circle = [i for i in range(1, n+1)]
result = [] # 요세푸스 결과
index = k - 1

# circle에서 걸린사람을 pop한 후에 start를 그 다음 인덱스의 수로 정한 후에 다시 pop
# 사람 한명씩 확인할때마다 pop,push를 해준다. 그리고 죽여야할 사람일 경우 pop을 한다.
# pop을 한후 result에 추가
while len(circle) > 0:
    while index > 0:
    # 죽일 사람인지 아닌지 확인하는 반복문
        tmp = circle[0] # 확인할 사람을 기억하기 위한 임시 변수 tmp
        del circle[0]
        circle.append(tmp)
        index -= 1
    ans = circle[0] # 죽일사람 ans
    del circle[0]
    result.append(ans) # 죽일사람을 result리스트에 추가
    index = k - 1 # index를 초기숫자로 돌려서 다시 죽일사람인지 아닌지 확인하는 반복문을 돌림


print('<' + ", ".join(map(str, result)) + '>')









# # 11866번: 요세푸스 문제 0
# import sys
#
# n, k = map(int, sys.stdin.readline().split()) # N, K 입력
# queue = [i for i in range(1,n+1)]
#
# answer = [] # 요세푸스 순열을 넣을 리스트
# index = 0
# temp = k-1
# while queue:
#     index = (index+temp)%len(queue)
#     answer.append(queue.pop(temp))
#
# print(answer)
