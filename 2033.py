# 2033번: 반올림

import math

num = int(input())
if num < 10:
    print(num)
else:
    for i in range(1, len(str(num))):
        num = math.floor((num/(10**i) + 0.5)) * (10**i)
    print(num)