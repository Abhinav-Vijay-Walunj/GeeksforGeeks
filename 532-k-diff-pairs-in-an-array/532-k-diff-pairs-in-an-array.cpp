class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        for(int i:nums)
            a[i]++;
        int ans=0;
        for(auto x:a)
        {
            if(k==0)
            {    
                if(x.second>1)
                ans++;
            }
             else if(a.find(x.first+k)!=a.end())
                ans++;
        }
        
        return ans;
        
       /* sort(nums.begin(),nums.end());
        int temp,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            temp=abs(k-nums[i]);
            if(nums.find(v.begin(),nums.end(),temp))
            {
                ans++;
            }
        }
        return ans;
        */
    }
};