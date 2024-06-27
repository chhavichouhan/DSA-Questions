class Solution {
    public int singleNumber(int[] nums) {
        if(nums.length<0)return 0;
        int n=nums.length;
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<n;i++)
        { if(map.containsKey(nums[i])==false)map.put(nums[i],1);
            else map.put(nums[i],map.get(nums[i])+1);
        }
        for(int i=0;i<n;i++)
        {
            if(map.get(nums[i])==1)return nums[i];
        }
         return 0;   
    }
}