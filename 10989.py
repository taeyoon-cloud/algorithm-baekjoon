# 10989번: 수 정렬하기 3
# 입력받는 숫자가 10,000 이하의 자연수이므로 값이 0인 10000개의 리스트를 만들어서 그 인덱스 값에 해당하는
# 수를 입력받을 때마다 값에다가 +1을 해주어서 그 인덱스에 따른 값을 출력하도록 만들어보자.
import sys

count = int(sys.stdin.readline())  # 숫자 개수

numlist = [0] * 10001

for i in range(count):
    num = int(sys.stdin.readline())
    numlist[num] += 1

for i in range(10001):
    if numlist[i] != 0:
        for j in range(numlist[i]):
            print(i)

