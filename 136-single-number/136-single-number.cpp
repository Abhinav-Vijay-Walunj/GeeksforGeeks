class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            res^=(*i);
        }
        return res;
        
    }
};