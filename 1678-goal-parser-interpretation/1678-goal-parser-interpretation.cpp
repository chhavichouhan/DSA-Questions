class Solution {
public:
    string interpret(string command) {
        string goal;
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='G')goal+='G';
            else if(command.at(i)=='a' && command.at(i+1)=='l')
            {
                goal+='a';
                goal+='l';
            }
            else if(command.at(i)=='(' && command.at(i+1)==')' && i+1<command.size())goal+='o';
            
        }
        return goal;
        
    }
};