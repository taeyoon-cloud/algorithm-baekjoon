# 10866번: 덱


import sys


def push_front(deque, num):
    deque.insert(0, num)


def push_back(deque, num):
    deque.append(num)


def pop_front(deque):
    if len(deque) == 0:
        print(-1)
    else:
        print(deque[0])


def pop_back(deque):
    if len(deque) == 0:
        print(-1)
    else:
        print(deque.pop())


def size(deque):
    print(len(deque))


def empty(deque):
    if len(deque) == 0:
        print(1)
    else:
        print(0)


def front(deque):
    if len(deque) == 0:
        print(-1)
    else:
        print(deque[0])


def back(deque):
    if len(deque) == 0:
        print(-1)
    else:
        print(deque[-1])


if __name__ == "__main__":
    deq = []  # 덱
    count = int(sys.stdin.readline())
    while count > 0:
        order = sys.stdin.readline().rstrip()
        if (order.split())[0] == "push_front":
            push_front(deq, order.split()[1])
        elif (order.split())[0] == "push_back":
            push_back(deq, order.split()[1])
        elif order == "pop_front":
            pop_front(deq)
            deq = deq[1:]
        elif order == "pop_back":
            pop_back(deq)
        elif order == "size":
            size(deq)
        elif order == "empty":
            empty(deq)
        elif order == "front":
            front(deq)
        elif order == "back":
            back(deq)
        count -= 1
