class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(auto i:s)  //iterate over each and every elements
        {
            if(i=='(' or i=='{' or i=='[') st.push(i);  //if current element of the string will be opening bracket then we will just simply push it into the stack
            else  //if control comes to else part, it means that current element is a closing bracket, so check two conditions  current element matches with top of the stack and the stack must not be empty...
            {
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;
                st.pop();  //if control reaches to that line, it means we have got the right pair of brackets, so just pop it.
            }
        }
        return st.empty(); 
        /*
        int n=s.size();
        int i=0;
        while(n>0)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if(st.top() != s[i] && !st.empty())
                return false;
            else
                st.pop();
            i++;
        }
        return true;
        */
    }
};