#4153번: 직각삼각형

results = []
while (True):
    nums = list(map(int, input().split()))
    if nums[0] == 0 and nums[1] == 0 and nums[2] == 0:
        break;
    nums.sort()
    if nums[2] ** 2 == nums[1] ** 2 + nums[0] ** 2:
        results.append("right")
    else:
        results.append("wrong")

for i in results:
    print(i)