# 1018번: 체스판 다시 칠하기

# 보드에 있는 정사각형의 색을 비교해주는 함수
def compare_color(booard, r, c):  # booard:원래의 보드, r: row, c: col
    row_w = list("WBWBWBWB")  # W로 시작하는 행
    row_b = list("BWBWBWBW")  # B로 시작하는 행
    change_list = []  #바뀐 정사각형의 개수를 저장하는 리스트

    # w로 시작하는 체스판으로 비교
    for a in range(r-7):  # 보드 속 행을 돌아다니는 변수 a
        for b in range(c-7):  # 보드 속 열을 돌아다니는 변수 b
            change_w = 0  # 바뀐 정사각형의 개수를 저장하는 변수
            for i in range(8):  # 체스판 속 행을 돌아다니는 변수 i
                if i % 2 == 0:
                    for j in range(8):  # 체스판 속 열을 돌아다니는 변수 j
                        if row_w[j] != booard[a+i][b+j]:
                            change_w += 1
                else:
                    for j in range(8):  # 체스판 속 열을 돌아다니는 변수 j
                        if row_b[j] != booard[a+i][b+j]:
                            change_w += 1
            change_list.append(change_w)
    # b로 시작하는 체스판으로 비교
    for a in range(r-7):  # 보드 속 행을 돌아다니는 변수 a
        for b in range(c-7):  # 보드 속 열을 돌아다니는 변수 b
            change_b = 0  # 바뀐 정사각형의 개수를 저장하는 변수
            for i in range(8):  # 체스판 속 행을 돌아다니는 변수 i
                if i % 2 ==0:
                    for j in range(8):  # 체스판 속 열을 돌아다니는 변수 j
                        if row_b[j] != booard[a+i][b+j]:
                            change_b += 1
                else:
                    for j in range(8):  # 체스판 속 열을 돌아다니는 변수 j
                        if row_w[j] != booard[a+i][b+j]:
                            change_b += 1
            change_list.append(change_b)

    return min(change_list)


row, col = map(int, input().split())

board = []  # 보드(이차원 리스트)

for i in range(row):
    board.append([])  # 각 행마다 이차원 리스트를 만들어줌
    row_string = list(input())  # 각 행에 들어가는 색들
    for j in range(col):
        board[i].append(row_string[j])  # a라는 리스트에 보드의 색들 입력 완료!

minimum = compare_color(board, row, col)
print(minimum)
