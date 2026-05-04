

nums = [2, 5, 5, 11]
answer = []
target = 10




def twoSum(nums: list, target: int) -> list:
    for i in range(len(nums)):
        print(f"i:{i}") # i = 0 = 1
        j = i + 1
        while j < len(nums):
            print(f"j:{j}") # j = 2
            if nums[i] + nums[j] == target:
                answer.append(i)
                answer.append(j)
                print(answer)
                return answer
            j = j + 1
        i = i + 1
    print(answer)
    return answer


twoSum(nums, target)
