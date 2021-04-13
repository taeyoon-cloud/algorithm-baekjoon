int_num = int(input())  # 처음 입력 받는 수(자료형: int)
n = int_num
cycle = 0 # 사이클 길이를 저장하는 변수

while True:
    next_num = ((n // 10) + (n % 10)) % 10 + (n % 10) * 10
    # 입력받은 수의 첫번째 자리와 두번째 자리를 더한 값의 일의 자리수가 다음 수의 두번째 자리수가 된다.
    # 입력받은 수의 두번째 자리수가 다음 수의 첫번째 자리수가 된다.
    cycle += 1
    n = next_num

    if next_num == int_num: # 바뀐 숫자가 처음에 입력한 숫자와 같다면 반복문 종료
        break;

print(cycle)