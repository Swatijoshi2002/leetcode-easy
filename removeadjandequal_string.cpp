class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        string str="";
        int i=0;
        while(i<s.length())
        {
            if(stack.size()==0)
            {
                stack.push(s[i]);
            }
            else if(s[i]==stack.top())
            {
                stack.pop();
            }
            else stack.push(s[i]);
            i++;
        }
        while(stack.size()!=0)
        {
            str+=stack.top();
            stack.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
