class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i=0,j=0;
        int n = accounts[i].size();
        int temp,ans=0;
        for(i=0;i<accounts.size();i++)
        {
            temp=0;
            for(j=0;j<n;j++)
            {
                temp+=accounts[i][j];
            }
            if(temp>ans)
            {
                ans=temp;
            }
        }
        return ans;
    }
};