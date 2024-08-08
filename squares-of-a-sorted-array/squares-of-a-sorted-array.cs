public class Solution {
    public int[] SortedSquares(int[] nums) {
        // Go through arr and square everything
        int[] newNums = new int[nums.Length];
        for(int i = 0; i < nums.Length; i++)
        {
            newNums[i] = (int)Math.Pow(nums[i], 2);
        }
        // Sort doubled array
        Array.Sort(newNums);
        return newNums;
    }
}