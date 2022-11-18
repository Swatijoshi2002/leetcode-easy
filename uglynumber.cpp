 bool solve(int n)
    {
      if(n<=0)return false;
        while(n>1)
        {
            if(n%2==0)n=n/2;
            else if(n%3==0)n=n/3;
            else if(n%5==0)n=n/5;
            else break;
        }
        return (n==1);
    }
    bool isUgly(int n) {
        if(n==0)return false;
        bool ans=solve(n);
        return ans;
    }
};
