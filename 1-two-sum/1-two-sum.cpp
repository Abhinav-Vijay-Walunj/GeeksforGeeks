class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> a;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if((target == (nums[i]+nums[j])&&(i!=j)))
                {
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return a;
    }   
    
};