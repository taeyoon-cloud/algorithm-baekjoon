# 2675번: 문자열반복

case = int(input())

for i in range(case):
    num, strings = input().split()
    num = int(num)
    result = strings[0] * num
    for i in range(1, len(strings)):
        result += num * strings[i]
    print(result)