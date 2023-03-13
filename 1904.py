# 1904_01타일
n = int(input())

def tile(n):
    if n == 1:
        return 1
    current, previous = 2, 1
    temp = 0
    for i in range(3, n+1):
        temp = current
        current  = (current + previous) % 15746
        previous = temp
    return current


print(tile(n))