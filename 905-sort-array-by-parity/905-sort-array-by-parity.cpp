class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans,t;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            if((*i)%2 != 0)
            {
                t.push_back(*i);
            }
            else
                ans.push_back(*i);
            
        }
        for(auto i=t.begin();i!=t.end();i++)
        {
            ans.push_back(*i);
        }
        return ans;
    }
};