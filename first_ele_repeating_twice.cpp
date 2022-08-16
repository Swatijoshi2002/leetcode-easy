class Solution {
public:
    char repeatedCharacter(string s) {
       map<char,int>m;
        char ch;
        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]]==1)
            {
                ch=s[i];
                break;
            }
            else m[s[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
            cout<<it->first<<" "<<it->second<<endl;
        
        return ch;
    }
};
