class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximum=0;
        for(int j=0;j<sentences.size();j++)
        {
          int count=1;
            int i=0;
            while(i<sentences[j].size())
            {
                if(sentences[j][i]==' ')count++;
                i++;
            }
           
            maximum=max(maximum,count);
        }
        return maximum;
        
    }
};