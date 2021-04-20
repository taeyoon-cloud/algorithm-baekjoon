#2562번: 최댓값


numlist = [int(input()) for i in range(9)]
print(max(numlist))
print(numlist.index(max(numlist)) + 1)