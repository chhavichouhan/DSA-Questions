class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])x=x+1;
            }
        }
        return x;
    }
};