class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> v;
        int n=nums.size();
        k=k%n;
        //cout<<"[";
        for(int i=0;i<n;i++)
        {
            v.push_back(nums[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            nums[(i+k)%n]=v[i];
                
        }
        cout<<"[";
       for(int i=0;i<n;i++)
       {
           //nums.push_back(v[i]);
           cout<<nums[i]<<" ";
       }
       cout<<"]";
       cout<<"\n";
    }
    /*
    in this simply make a copy of this array and as we have to shift by k places so i change to i+k and when i+k>n then we will start from 0 so we take modulo so that we aget equired output
    */
};