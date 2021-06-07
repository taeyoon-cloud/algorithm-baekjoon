# 10828번: 스택
import sys

def push(stack, num):
    stack.append(num)

def pop(stack):
    if len(stack) == 0:
        print(-1)
    else:
        print(stack.pop())

def size(stack):
    print(len(stack))

def empty(stack):
    if len(stack) == 0:
        print(1)
    else:
        print(0)

def top(stack):
    if len(stack) == 0:
        print(-1)
    else:
        print(stack[-1])

if __name__ == "__main__":
    stack = []  # 스택
    count = int(sys.stdin.readline())  # 명령 개수
    while count > 0:
        order = sys.stdin.readline().rstrip()
        if (order.split())[0] == "push":
            push(stack, (order.split()[1]))
        elif order == "pop":
            pop(stack)
        elif order == "size":
            size(stack)
        elif order == "empty":
            empty(stack)
        elif order == "top":
            top(stack)
        count -= 1
