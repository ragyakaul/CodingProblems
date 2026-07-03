
nums1 = [1, 2]
nums2 = [3, 4]



def medianOfTwoSortedArrs(nums1, nums2):
    joinedList = nums1 + nums2
    joinedList.sort()
    print(f"joinedList: {joinedList}")

    midpoint = len(joinedList)/2
    print(f"midpoint: {midpoint}")
    print(f"midpoint rounded off: {int(midpoint)}")

    midpoint = int(midpoint)

    if len(joinedList) % 2 == 0:
        median = (joinedList[midpoint] + joinedList[midpoint - 1])/2
    else:
        median = joinedList[midpoint]
    
    return median



print("Answer: ")
print(medianOfTwoSortedArrs(nums1, nums2))
