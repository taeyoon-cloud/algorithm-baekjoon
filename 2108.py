#2108번: 통계학
import sys, math
from collections import Counter

# 산술 평균
def avg(nlist):
    return(round(sum(nlist)/len(nlist)))

# 중앙값
def median(nlist):
    nlist.sort()
    return nlist[len(nlist)//2]

# 최빈값 -> dictionary 사용
# 값이 하나일 경우 그 값 그대로 리턴
def mode(nlist):
    mode_dict = Counter(nlist) # 항목의 개수를 셀때 사용되는 클래스 Counter
    modes = mode_dict.most_common() # most_common인자를 주지않으면 전체요소 출력됨
    if len(modes) > 1:
        if modes[0][1] == modes[1][1]: # 최빈값이 2개 일경우
            return modes[1][0] # 두번째로 작은 값을 출력
        else:
            return modes[0][0]
    else: # modes에 값이 한개 이하일경우 그 값을 리턴
        return modes[0][0]

# 범위
def scope(nlist):
    return max(nlist) - min(nlist)

count = int(sys.stdin.readline())
numlist = [int(sys.stdin.readline()) for i in range(count)]

print(avg(numlist))
print(median(numlist))
print(mode(numlist))
print(scope(numlist))