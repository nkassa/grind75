class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int> count;
        for(char c: magazine)
        {
            count[c]++;
        }
        for(char c: ransomNote)
        {
            if(count[c] > 0)
            {
                count[c]--;
                if(count[c] == 0)
                {
                    count.erase(c);
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};