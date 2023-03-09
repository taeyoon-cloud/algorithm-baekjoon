# 9663번: N-Queen
n = int(input())

visited = [0] * (n+1)
# result = []
count = 0

# 해당 칸에 퀸을 놓아도 되면 true 리턴, 아니면 false 리턴
def is_promising(x):
    for i in range(1, x):
        if visited[x] == visited[i] or abs(visited[x] - visited[i]) == abs(x-i):
            return False
    return True


def back_tracking(num):
    global count
    if num == n+1:
        count += 1
        # print(*result)
        return
    
    
    else:
        for i in range(1, n+1):
        # [num, i]에 퀸을 놓겠다.
            visited[num] = i
            if is_promising(num):
                # result.append(i)
                back_tracking(num+1)
                # result.pop()




back_tracking(1)
print(count)

