class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        vector<int>v;
        string palin="";
        while(x>0)
        {
           palin+=to_string(x%10);
            x=x/10;
        }
       string s1=palin;
        reverse(palin.begin(),palin.end());
        if(s1.compare(palin)==0)
        return true;
        else return false;
    }
};
