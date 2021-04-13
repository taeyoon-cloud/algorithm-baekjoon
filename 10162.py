#백준 10162번: 전자레인지

#요리해야할 시간 time
time = int(input())


# 제시된 3개의 버튼으로 T초를 맞출 수 없는 경우
if time % 10 != 0:
    print(-1)
else:
    # a버튼(300초)
    a = time // 300
    result = time % 300
    # b버튼(60초)
    b= result // 60
    result %= 60
    # c버튼(10초)
    c = result // 10
    result %= 10

    print("{} {} {}".format(a, b, c))