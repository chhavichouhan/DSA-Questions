class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int leftsum[nums.size()],rightsum[nums.size()];
        int ans[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            if(i-1<0)leftsum[i]=0;
            else leftsum[i]=leftsum[i-1]+nums[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i+1==nums.size())rightsum[i]=0;
            else rightsum[i]=rightsum[i+1]+nums[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=leftsum[i]-rightsum[i];
            
            nums[i]=abs(ans[i]);
           
        }
        
        return nums;
    }
};