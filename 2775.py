#2775번: 부녀회장이 될테야

case = int(input())

for i in range(case):
    k = int(input()) #k층
    n = int(input()) #n호
    apart = [i for i in range(1, n+1)] # 0층에 있는 인원들 초기화

    for x in range(k): # k층
        for y in range(1, n): # n호
            apart[y] += apart[y-1] # k층 n호 = k층 (n-1)호 + (k-1)층 n호
            # print(apart) <- 이해하려면 해보기
    print(apart[-1])
