# 백준 2511: 카드놀이

a = list(map(int, input().split())) # a list를 받음
b = list(map(int, input().split())) # b list를 받음

score_a = 0 # a의 승점
score_b = 0 # b의 승점

for i in range(len(a)):
    if a[i] > b[i]:
        score_a += 3
    elif a[i] < b[i]:
        score_b += 3
    else:
        score_a += 1
        score_b += 1


print(score_a, score_b) # a와 b의 승점 출력


if a == b:
    print("D")
elif score_a > score_b:
    print("A")
elif score_a < score_b:
    print("B")
elif score_a == score_b: # 마지막으로 승부가 난 라운드의 승자가 승자가 된다.
    for i in range(len(a)-1, 0, -1):
        if a[i] > b[i]:
            print("A")
            break;
        elif a[i] < b[i]:
            print("B")
            break;
        else:
            continue;


