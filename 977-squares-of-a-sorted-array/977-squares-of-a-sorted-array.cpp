class Solution {
    typedef long long ll;
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //vector <int> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums[i]*=nums[i];
        }
        sort(nums.begin(),nums.end());
        /*int j=0,i;
        ll a,b;
        
        while(nums[j]<0)
            j++;
        i=j-1;
        while(j<n || i>=0)
        {
            a= nums[i]*nums[i];
            b= nums[j]*nums[j];
            if(a > b)
            {
                v.push_back(b*b);
                j++;
            }
            else if(a*a<b*b)
            {
                v.push_back(a*a);
                i++;
            }
            else if(a*a == b*b)
            {
                v.push_back(a*a);
                v.push_back(b*b);
                i++;
                j++;
                
            }
        }
        return v;
       
        */
        return nums;
    }
};