#2292번: 벌집

room = int(input())
i = 0 # 몇 개의 방을 지나는지 확인하는 변수
k = (room-1) / 6

while i * (i+1) / 2 < k:
    i += 1

print(i+1)

