class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0,e=s.size()-1;
        char k;
        while(st<e)
        {
            k=s[st];
            s[st]=s[e];
            s[e]=k;
            st++;
            e--;
            
        }
        
        for(int j=0;j<e+1;j++)
        {
            cout<<s[j]<<",";
        }
        
    }
};