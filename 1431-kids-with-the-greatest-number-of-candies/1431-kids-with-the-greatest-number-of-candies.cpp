class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),false);
        int maximum=INT_MIN;
        for(int i=0;i<candies.size();i++)maximum=max(candies[i],maximum);
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=maximum)
            ans[i]=true; 
            else ans[i]=false;
        }
        return ans;
    }
};