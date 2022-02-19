class Solution {
public:
    int length(string s1,string s2)
    {
        int len=0;
        for(int i=0;i<min(s1.length(),s2.length());i++)
        {
            if(s1[i]!=s2[i])
                return len;
            else if(s1[i]==s2[i])
                len++;
        }
        return len;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int n=length(strs[0],strs[1]);
        if(strs.size()==1 && strs[0].length()==1)
            return strs[0];
        if(n==0)
            return s;
        
        else s=strs[0].substr(0,n);
        for(int i=2;i<strs.size();i++)
        {
            string temp=strs[i].substr(0,n);
            if(s.compare(temp)==0)
                continue;
                while(s.compare(temp)!=0)
                {
                    n--;
                    s=strs[0].substr(0,n);
                     temp=strs[i].substr(0,n);
                }
              
            
            
        }
        return s;
    }
};
