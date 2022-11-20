class Solution {
public:
   
    
    int longestValidParentheses(string s) {
      int ans=0,ans2=0;
        stack<int> st;
        st.push(-1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else{
                st.pop();
                if(st.size()==0)
                {
                    st.push(i);
                }
                else {
                    ans2=i-st.top();
                    ans=max(ans,ans2);
                }
            }
        }
    
        return ans;
    }
};
