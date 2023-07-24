class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int a[n],b[n];
        for(int i=0;i<n;i++)a[i]=nums[i];
        for(int i=n,j=0;i<nums.size();i++,j++)b[j]=nums[i];
        for(int i=0,j=0,k=0;i<n*2;i++)
        {
            if(i%2==0)
            {
                nums[i]=a[j];
                j++;
            }
            else
            {
                nums[i]=b[k];
                k++;
            }
        }
         return nums;
    }
};