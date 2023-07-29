class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans(encoded.size()+1,0);
         ans[0]=first;
        for(int i=0,j=1;i<encoded.size();i++,j++)
        {
            first=encoded[i]^first;
            ans[j]=first;
        }
        return ans;
        
    }
};