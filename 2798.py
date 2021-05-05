#2798번: 블랙잭

num, limit = map(int, input().split())

numlist = list(map(int, input().split()))

maxim = 0 # limit 이하의 최댓값을 일단 0으로 선언

for i in range(len(numlist)-2):
    for j in range(i+1, len(numlist)-1):
        for k in range(j+1, len(numlist)):
            case = numlist[i] + numlist[j] + numlist[k]
            if maxim < case <= limit:
                maxim = case

print(maxim)