board = [list(map(int, input().split())) for _ in range(9)]

zeros = [] # 0인 칸들을 저장하는 리스트
for i in range(9):
    for j in range(9):
        if board[i][j] == 0:
            zeros.append((i, j))


# 보드의 (i,j)칸에 숫자 n이 들어가도 되는지 확인하는 함수
def check_sudoku(i, j, n):
    
    # 대각선 확인을 위한 계산
    tx = j // 3 * 3
    ty = i // 3 * 3
    
    for x in range(9):
        # 가로 확인
        if board[i][x] == n:
            return False
        # 세로 확인
        if board[x][j] == n:
            return False
        # 3*3 사각형 확인
        if board[ty + x // 3][tx + x % 3] == n:
            return False
        
    return True





def back_tracking(num):
    if num == len(zeros):
        for line in board:
            print(*line)
        exit(0)
    
    else:
        y, x = zeros[num]
        for i in range(1, 10):
            if check_sudoku(y, x, i):
                board[y][x] = i
                back_tracking(num+1)
                board[y][x] = 0


back_tracking(0)
