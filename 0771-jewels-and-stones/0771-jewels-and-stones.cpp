class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<jewels.size();i++)
        {
            for(int j=0;j<stones.size();j++)
            {
                if((jewels[i]-48)==(stones[j]-48))
                count+=1;
            }
        }
        return count;
        
    }
};