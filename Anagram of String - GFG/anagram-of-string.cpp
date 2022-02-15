// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends

//const int CHARS = 26;
// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    int count1[CHARS] = {0}, count2[CHARS] = {0};
 
    // count frequency of each character in first string
    for (int i=0; str1[i]!='\0'; i++)
        count1[str1[i]-'a']++;
 
    // count frequency of each character in second string
    for (int i=0; str2[i]!='\0'; i++)
        count2[str2[i]-'a']++;
 
    // traverse count arrays to find number of characters
    // to be removed
    int result = 0;
    for (int i=0; i<26; i++)
        result += abs(count1[i] - count2[i]);
    return result;
    /*
    int c,k=0;
    for(int i=0;i<str1.size();i++)
    {
        c=0;
        for(int j=0;j<str2.size();j++)
        {
            if(str1[i] == str2[j])
                c=1;
        }
        if(c == 0)
            k++;
    }
    return k;
    */
// Your code goes here
}