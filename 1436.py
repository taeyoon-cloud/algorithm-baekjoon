# 1436번: 영화감독 숌

num = int(input())
series = 665
while num: # num이 0보다 클 때 까지 반복문 실행
    if "666" in str(series): # series에 "666"이라는 문자열이 하나 이상 들어있을 경우
        num -= 1
    series += 1

print(series-1)