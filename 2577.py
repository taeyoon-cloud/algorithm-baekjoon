#2577번: 숫자의 개수


a = int(input())
b = int(input())
c = int(input())

result = a * b * c

data = list(str(result)) # 입력받은 수를 문자열(string)으로 바꾸고 그 값을 다시 list로 바꿈

int_data = list(map(int, data)) # list에는 숫자들이 문자로 들어가 있기 때문에 map함수를 이용해 안의 수들을 다시 int로 바꿔줌

for i in range(0, 10):
    print(int_data.count(i)) # count함수 -> 리스트에 특정한 문자가 몇개 들어가 있는지 알려줌