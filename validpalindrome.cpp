class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                ans+=s[i]+32;
            }
            if(s[i]>=97 && s[i]<=122)
            {
                ans+=s[i];
            }
            if(s[i]>=48 && s[i]<=57)
            {
                  ans+=s[i];
            }
            else continue;
        }
        string ans_r=ans;
        cout<<ans_r<<" ";
            reverse(ans.begin(),ans.end());
        cout<<ans;
        if(ans==ans_r)
            return true;
        else return false;
    }
};
