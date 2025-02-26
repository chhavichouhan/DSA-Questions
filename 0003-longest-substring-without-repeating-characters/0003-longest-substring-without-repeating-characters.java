class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.length() == 0)return 0;
        s = s.trim();
        if(s.length() == 0)return 1;
        int max = 1;
        for(int i = 0 ; i<s.length() ; i++)
        {
            if(s.charAt(i) == ' ')continue;
            int count = 0;
            List<Character> list = new ArrayList<>();
            for(int j = i ; j<s.length() ; j++)
            {
                if(list.contains(s.charAt(j)))
                {
                    max = Math.max(max,count);
                    break;
                }
                count++;
                max = Math.max(max,count);
                list.add(s.charAt(j));
            }
        }
        return max;
    }
}