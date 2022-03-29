class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // Find the "entrance" to the cycle.
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
        /*
        int n=nums.size()-1;
        long long k = (n*(n+1))/2;
        int s=0;
        for(int i=0;i<= n;i++)
        {
            s+=nums[i];
        }
        return s-k;
        
        /*
        sort(nums.begin(),nums.end());
        int k;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            k=*(i+1);
            if(*i == k)
                return k;
        }
        
        return 0;
        */
        
    }
};