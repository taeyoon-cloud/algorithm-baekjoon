# 10250번: ACM 호텔

case = int(input()) #테스트할 케이스 개수
result = [] # n번째 손님에게 배정되어야 할 방 번호를 저장하느 리스트

for i in range(case):
    height, width, n = map(int, input().split())
    first = 100 # 방을 배정받기 전의 상황
    if n % height == 0:
        room = first * height + n // height
    else:
        room = first * (n % height) + (n // height + 1)

    result.append(room)

for i in result:
    print(i)
