# 1181번: 단어 정렬
import sys # 실행시간 단축

num = int(input()) # 단어 개수
words = set() # words = 단어들을 입력받는 set
for i in range(num):
    words.add(sys.stdin.readline().rstrip())

words = list(words) # 정렬해주기 위해 set을 list로 바꿔줌
words.sort()
words.sort(key = lambda x:len(x))


for word in words:
    print(word) #


