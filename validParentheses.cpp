class Solution {
public:
    unordered_map<char,char> count = {{'{', '}'}, {'[',']'}, {'(', ')'}};
    bool isValid(string s) 
    {
        stack<char> stack;
        for(char c: s)
        {
            if(count.find(c) != count.end())
            {
                stack.push(c);
            }
            else 
            {
                if(!stack.empty() && count[stack.top()] == c)
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return stack.size() == 0;
    }
};