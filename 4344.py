# 백준 4344: 평균은 넘겠지

# 테스트 케이스 num
num = int(input())
i = 0
final_list = [] # 한 줄마다 평균을 넘는 학생들의 비율을 저장하는 리스트
while i < num:
    total = 0
    scores = list(map(int, input().split())) # scores 리스트에 한 줄에 입력한 값들을 다 넣음

    for j in range(1, len(scores)):
        total += scores[j]

    avg = total / scores[0]  # 학생들의 평균 점수 avg
    winner = 0 # 평균보다 높은 학생의 수

    for j in range(1, len(scores)):
        if scores[j] > avg:
            winner += 1
    winner_percent = winner / scores[0] # winner_percent -> 평균을 넘는 학생의 비율
    final_list.append(winner_percent)
    i += 1

for avg in final_list:
    print("{:.3f}%".format(round(avg * 100, 3)))

