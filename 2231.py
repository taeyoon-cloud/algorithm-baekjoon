#2231번: 분해합

n = int(input())
start_num = max(0, n - 9*len(str(n)))
# 시작 범위를 줄인다.
# 시작수는 0과 n에서 9 * (n의자리수) 뺀 값 둘 중 큰 값 이상이다.
# 그 값 이하로 가면 분해합으로 n을 만들 수 없다.

for i in range(start_num, n):
    if i + sum(map(int, str(i))) == n:
        print(i)
        break
else:
    print(0)