// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
  const int MAX_CHAR = 26;
    string arrangeString(string str)
    {
        int char_count[MAX_CHAR] = {0};
    int sum = 0;

    // Traverse the string
    for (int i = 0; i < str.length(); i++)
    {
        // Count occurrence of uppercase alphabets
        if (str[i]>='A' && str[i] <='Z')
            char_count[str[i]-'A']++;

        //Store sum of integers
        else
            sum = sum + (str[i]-'0');
    }

    string res = "";

    // Traverse for all characters A to Z
    for (int i = 0; i < MAX_CHAR; i++)
    {
        char ch = (char)('A'+i);
        // Append the current character
        // in the string no. of times it
        //  occurs in the given string
        while (char_count[i]--)
            res = res + ch;
    }

    // Append the sum of integers
    if (sum > 0)
        res = res + to_string(sum);

    // return resultant string
    return res;
        /*
        sort(str.begin(),str.end());
        string ans;
        int temp=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i] >= 48 && str[i] <= 57)
            {
                temp+=int(str[i]);
                str.erase(i);
            }
            else
            {
                ans[j]=
            }
        }
        
        */
        //code here.
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends