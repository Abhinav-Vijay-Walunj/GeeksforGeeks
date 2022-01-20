class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp.insert(make_pair(nums[i],1));
            }
            else
            {
                mp[nums[i]]++;
            }
        }
        int t=floor(n/3);
        vector<int> v;
        for(auto x:mp)
        {
            if(x.second > t)
            {
                v.push_back(x.first);
            }
        }
        return v;
    }
};