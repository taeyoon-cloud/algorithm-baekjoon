#백준 1924번: 2007년


month, date = map(int, input().split())

i = 0
total_date = 0 # 그 날짜까지의 총 일수 합
while i < month:
    if i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12:
        total_date += 31
    elif i == 4 or i == 6 or i == 9 or i == 11:
        total_date += 30
    elif i == 2:
        total_date += 28
    i += 1
total_date += date

day_list = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"]
day = total_date % 7 # 총 일수를 7로 나눴을 때의 나머지에 따라 요일이 바뀜
print(day_list[day])