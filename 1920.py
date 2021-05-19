# 1920번: 수 찾기
import sys

def binarySearch(list, target):
    start = 0
    end = len(list)-1

    while start <= end:
        mid = (start + end) // 2
        if list[mid] == target: # 찾는 값이 중간값일경우
            return 1# 1 return
        elif list[mid] > target: # 찾는 값이 중간값보다 작을 경우
            end = mid - 1 # end값은 mid값에 -1을 해준 값
        else: # 찾는 값이 중간값보다 클 경우
            start  = mid + 1 # start값은 mid값에 +1을 해준 값

    return 0 # 찾는 값이 없을 경우 0 return


n = int(sys.stdin.readline()) # 입력받는 자연수 개수(N의 개수)
numlist = sorted(list(map(int, sys.stdin.readline().split())))
# A리스트 정렬

m = int(sys.stdin.readline()) # M의 개수
candidate = list(map(int, sys.stdin.readline().split()))
for i in range(m):
    print(binarySearch(numlist, candidate[i]))
