 string reverseWords(string s) {
        string str="";
        stack<string>stack;
        int i=0;
        for(int i=0;i<s.length();i++)
        {
           if(str.length()!=0 && s[i]==' ')
           {
               cout<<str;
               stack.push(str);
               str="";
           }
            if(str.length()==0 && s[i]==' ')
            {
                continue;
            }
            else str+=s[i];
        }
        cout<<endl;
        if(s[s.length()-1]!=' ')
        stack.push(str);
        str+="";
        string temp="";
        while(stack.size()!=0)
        {
            temp+=stack.top();
            stack.pop();
            if(stack.size()!=0)
            {
                 temp+=" ";
            }
        }
        
        return temp;
    }
