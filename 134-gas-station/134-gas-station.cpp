class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int g=0,c=0;
        for(int i=0;i<gas.size();i++)
        {
            c+=cost[i];
            g+=gas[i];
        }
        if(c>g)
        {
            return -1;
        }
        int f=0,ans = 0;
        for(int i=0;i<gas.size();i++)
        {
            f+=(gas[i]-cost[i]);
            if(f < 0)
            {
            f=0;
                ans=i+1;
            }
        }
        return ans;
    }
};