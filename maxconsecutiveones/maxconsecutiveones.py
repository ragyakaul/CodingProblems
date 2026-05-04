
nums = [1,1,1,0,0,0,1,1,1,1,0]
k = 2


# k = 3
# nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1]



left = 0
right = 0
maxwindow = 0
maxArr = []
while right < len(nums):
    if nums[right] == 0 and k != 0:
        k = k - 1
        right = right + 1
        maxwindow = maxwindow + 1
        maxArr.append(maxwindow)
        print(f"maxwindow is {maxwindow} and k is {k}")
    elif nums[right] == 1:
        right = right + 1
        maxwindow = maxwindow + 1
        maxArr.append(maxwindow)
        print(f"maxwindow is {maxwindow} and k is {k}")
    else:
        if nums[left] == 0:
            k = k + 1
        left = left + 1
        maxwindow = maxwindow - 1
        maxArr.append(maxwindow)
        print(f"maxwindow is {maxwindow} and k is {k}")

print(max(maxArr))

