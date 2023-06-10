# 2805번: 나무 자르기
n, m = map(int, input().split())
trees = list(map(int, input().split()))

start = 0
end = max(trees)
answer = 0


while start <= end:
    h = (start + end) // 2 # 절단기 높이 h

    count = 0 # 지정된 mid값을 절단기 높이로 지정했을 때 자를 수 있는 나무 길이의 합

    for tree in trees:
        temp = tree - h 
        if temp > 0: # 절단기로 나무를 자른 길이가 0보다 큰 경우
            count += temp

    if count >= m: # 자른 나무의 총합이 m이상인 경우
        answer = h # 절단기 높이의 최댓값을 여기서 result에 입력(탐색을 반복하면, 최댓값이 answer에 입력될 것)
        start = h + 1 # 절단기 높이 높여서 다시 탐색
    else: # 자른 나무의 총합이 m보다 작은 경우,
        end = h - 1 # 절단기 높이 낮춰서 다시 탐색

    # print(start, end, h, count, answer)


print(answer)

