public class Solution {
    public int[] SortedSquares(int[] nums) {
        int[] newNums = new int[nums.Length];
        int left = 0;
        int right = nums.Length - 1;
        
        for(int i = nums.Length - 1; i >= 0; i--)
        {
            int square = 0;
            if(Math.Abs(nums[left]) < Math.Abs(nums[right]))
            {
                square = nums[right]; 
                right--;
            }
            else 
            {
                square = nums[left];
                left++;
            }
            newNums[i] = square * square;
        }
        return newNums;
    }
}