class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int ans = 0;
        int mini = INT_MAX;
        for(int i = 0; i < prices.size(); i++)
        {
            if(mini > prices[i])
            {
                mini = prices[i];
            }
            else
            {
                ans = max(ans, prices[i] - mini);
            }
        }
        return ans;
    }
};