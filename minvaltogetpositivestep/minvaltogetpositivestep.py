
nums = [-3,2,-3,4,2]



runningSum = 0
sumArr = []
i = 0, j = 0
while True:
    runningSum = runningSum + i + nums[j] # 0 + 0 + -3
    if runningSum < 1:
        runningSum = 0
        sumArr = []
        break
    sumArr.append(runningSum)
    ++j
    if j > len(nums):
        print(sumArr)
        print(i)