# 1978번: 소수 찾기
# 소수: 1보다 큰 자연수중 1과 자기자신만을 약수로 갖는 수
# 에라토스테네스의 체를 이용해서 구함
import sys

#에라토스테네스의 체 구현
def eratos(n):
    check = [True] * (n+1)
    # 0~n까지의 수를 일단 소수라고 입력
    # 인덱스값을 그 숫자로 이해하기 위해서 n+1까지 해줌
    m = int(n ** 0.5)
    # n의 제곱근까지만 반복문을 돌리면 된다.
    # 어떤 수의 소수 여부를 확인 할때는 특정한 숫자의 제곱근까지만 약수의 여부를
    # 검증하면 O(N^1/2)의 시간복잡도로 빠르게 구할 수 있다.
    # 어떤 수를 나누면 몫이 생기는데, 몫과 나누는 수 둘 중 하나는 그 수 의 제곱근
    # 이하이기 때문
    for i in range(2, m+1): # 2~m까지의 수를 반복문을 돌린다.
        if check[i] == True:
            for j in range(i+i, n+1, i):
            #i를 제외한 i~n까지의 수 중에 i의 배수를 False로 입력
                check[j] = False
    return [i for i in range(2, n+1) if check[i] == True]
    # n이하의 소수들이 담겨 있는 리스트 출력

if __name__ == "__main__":
    count = int(sys.stdin.readline())  # 입력받는 수 개수
    numlist = list(map(int, sys.stdin.readline().split()))
    maxim = max(numlist)  # numlist의 최댓값 -> 2~maxim까지의 소수를 구하려고

    answer = 0
    for num in numlist:
        if num in eratos(maxim):
            answer += 1
    print(answer)
