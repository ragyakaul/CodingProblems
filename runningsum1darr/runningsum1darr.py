
nums = [1, 2, 3, 4]

runningSum = 0
sumArr = []

for i in range(len(nums)):
    runningSum = runningSum + nums[i]
    sumArr.append(runningSum)

print(sumArr)

