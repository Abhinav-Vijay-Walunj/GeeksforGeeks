class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> v;
        int temp,c;
        for(int i=0;i<=n;i++)
        {
            temp=i;
            c=0;
            while(temp!=0)
            {
                if(temp%2 == 1)
                    c++;
                temp=temp/2;
            }
            v.push_back(c);
        }
        return v;
        
    }
};