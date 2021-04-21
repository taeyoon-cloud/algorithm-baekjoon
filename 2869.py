#2869번: 달팽이는 올라가고 싶다


up, down, height = map(int, input().split())

day = (height - up) / (up - down) + 1

if day == int(day): # day가 정수일 경우 그 값을 출력
    print(int(day))
else:
    print(int(day) + 1) # day가 정수가 아닐경우 day보다 큰 첫번째 정수를 출력

# 아니면 math.ceil(day) -> 올림 함수를 사용해서 출력해도 됨


