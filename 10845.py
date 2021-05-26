# 10845번: 큐
import sys


def push(que, num):
    que.append(num)


def pop(que):
    if len(que) == 0:
        print(-1)
    else:
        print(que[0])


def size(que):
    print(len(que))


def empty(que):
    if len(que) == 0:
        print(1)
    else:
        print(0)


def front(que):
    if len(que) == 0:
        print(-1)
    else:
        print(que[0])


def back(que):
    if len(que) == 0:
        print(-1)
    else:
        print(que[-1])


if __name__ == "__main__":
    ique = []  # 큐
    count = int(sys.stdin.readline())
    while count > 0:
        order = sys.stdin.readline().rstrip()
        if (order.split())[0] == "push":
            push(ique, order.split()[1])
        elif order == "pop":
            pop(ique)
            ique = ique[1:]
        elif order == "size":
            size(ique)
        elif order == "empty":
            empty(ique)
        elif order == "front":
            front(ique)
        elif order == "back":
            back(ique)
        count -= 1
