class Solution {
    public boolean check(int[] nums) {
        int count=0;
        int n=nums.length;
        for(int i=1;i<n;i++)
        {
            //if sorted array is rotated in that case it will ++ for once only 
            if(nums[i-1]>nums[i])count++;
        }
        if(nums[0]<nums[n-1])count++;//if array is rotated in that case it will not ++ & if it is sorted than it will ++ now 
        
        if(count<=1)return true;//hence if array is sorted(with rotation or not) it will have only 1 count 
        return false;
    }
}