#2609번: 최대공약수와 최소공배수
# 최대공약수는 유클리드 호제법을 이용해서 구한다.

a, b = map(int, input().split())
num1 = max(a, b)
num2 = min(a, b) # a에는 둘중에 큰 값, b에는 둘 중에 작은 값
ttmp = num2 # 최소공배수를 구하기 위해 입력값 중 작은 값을 저장하는 임시 변수

rest = num1 % num2
if rest == 0: # 만약 작은 수가 큰 수로 나눠진다면 작은 수가 최대공약수, 큰 수가 최소공배수
    gcd = num2
    lcm = num1
else:
    while num2 % rest:
        tmp = num2 % rest
        num2 = rest
        rest = tmp
    gcd = rest # 최대공약수(greatest common divisor)
    lcm = (ttmp // rest) * num1 # 최소공배수(least common multiple)

print(gcd)
print(lcm)