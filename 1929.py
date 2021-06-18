# 1929번: 소수 구하기
import sys

#에라토스테네스의 체: 어떤 수가 소수인지를 알기 위해서는 그 수의 제곱근까지만 약수의 여부를 검증하면 됨
start, end = map(int, sys.stdin.readline().split())


check = [True] * (end+1)
checkNum = int(end ** 0.5)
for i in range(2, checkNum + 1):
    if check[i] == True:
        for j in range(i+i,end+1,i):
            check[j] = False

# 위 식으로 end까지의 소수의 리스트를 구함(true일 경우 소수)
if start == 1: # 1은 소수가 아니므로 1이 시작범위에 있을 경우 +1을 해줌
    start += 1

for i in range(start, len(check)):
    if check[i] == True: # 소수 출력
        print(i)