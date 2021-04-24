# 11050번: 이항 계수 1

def factorial(num):
    if num <= 1:
        return 1
    return num * factorial(num-1)

n, k = map(int,input().split())

print(factorial(n) // (factorial(n-k) * factorial(k)))