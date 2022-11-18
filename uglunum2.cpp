 int solve(int n)
    {
        int i2=0,i3=0,i5=0;
        int a[n];
        a[0]=1;
        int next_2=a[0]*2;
        int next_3=a[0]*3;
        int next_5=a[0]*5;
        for(int i=1;i<n;i++)
        {
            int next_num=min(next_2,min(next_3,next_5));
            a[i]=next_num;
            if(next_num==next_2)
            {
                i2++;
                next_2=a[i2]*2;
            }
           if(next_num==next_3)
            {
               i3++;
                next_3=a[i3]*3;
            }
            if(next_num==next_5)
            {
                i5++;
                next_5=a[i5]*5;
            }
        }
        return a[n-1];
    }
    int nthUglyNumber(int n) {
        int ans=solve(n);
        return ans;
    }
};
