# 2751번: 수 정렬하기 2
# merge sort나 quick sort로 오름차순 정렬을 구현하자.


import sys

num = int(input()) # 입력받는 숫자 개수
num_list = [] # 숫자들을 입력할 빈 리스트

for i in range(num):
    num_list.append(int(sys.stdin.readline()))


def merge_sort(list):
    # base case
    if len(list) < 2:
        return list

    # recursion case
    mid = len(list) // 2
    list_left = merge_sort(list[:mid])
    list_right = merge_sort(list[mid:])

    i = 0 # i = list_left에서 사용될 index
    j = 0 # j = list_right에서 사용될 index
    k = 0 # k = list전체에서 사용될 index

    # i가 list_left의 길이보다 작고, j가 list_right의 길이보다 작을 때
    while i < len(list_left) and j < len(list_right) :
        if list_left[i] < list_right[j]: # 왼쪽 리스트와 오른쪽 리스트의 값들일 비교해서 더 작은 값을 list의 왼쪽 부터 집어넣음
            list[k] = list_left[i]
            i += 1
        else:
            list[k] = list_right[j]
            j+= 1
        k += 1

    if i == len(list_left): # list_left의 원소를 다 썼을 때
        while j < len(list_right):
            list[k] = list_right[j]
            j += 1
            k += 1
    elif j == len(list_right): # list_right의 원소를 다 썼을 때
        while i < len(list_left):
            list[k] = list_left[i]
            i += 1
            k += 1

    return list


sorted_list = merge_sort(num_list)
for nums in sorted_list:
    print(nums)
