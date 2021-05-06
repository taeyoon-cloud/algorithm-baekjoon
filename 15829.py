# 15829번: Hashing

length = int(input())
word = input()
sum = 0
for i in range(length):
    sum += (ord(word[i]) - 96) * (31 ** i)
print(sum % 1234567891)