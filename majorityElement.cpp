class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> count;
        for(int num: nums)
        {
            count[num]++;
        }
        int ans= 0;
        int maxi = 0;
        for(auto [key,val]: count)
        {
            if(maxi < val)
            {
                maxi = val;
                ans = key;
            }
        }
        return ans;
    }
};