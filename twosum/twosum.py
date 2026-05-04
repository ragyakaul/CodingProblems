

nums = [3,2,4]
answer = []
target = 9


for i in range(len(nums)):
    print(f"i:{i}")
    j = 1
    while j < len(nums):
        print(f"j:{j}")
        if nums[i] + nums[j] == target:
            answer.append(i)
            answer.append(j)

        j = j + 1
    i = i + 1
print(answer)
