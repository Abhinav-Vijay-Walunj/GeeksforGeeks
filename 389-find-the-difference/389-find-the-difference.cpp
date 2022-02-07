class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char c;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        for(int i=0;i<t.size();i++)
        {
            mp[t[i]]--;
        }
        for(auto v : mp)   
            if(v.second != 0) 
                c = v.first;
        
        return c;
    }
};