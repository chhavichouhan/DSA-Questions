class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        if(nums.length<=0)return 0;
        int max=0,count=0;
        for(int i=0;i<=nums.length;i++)//as if last element is 1 then max will not update for those last consecutive ones 
        {
            if(i<nums.length && nums[i]==1)
            {
                count++;
            }
            else
            {
                max=Math.max(max,count);
                count=0;
            }
        }
        return max;
    }
}