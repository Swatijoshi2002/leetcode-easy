  int guessNumber(int n) {
    int start =1;
    int end=n;
    int mid;
    int ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(guess(mid)==0)
        {
            ans= mid;
        }
        if(guess(mid)==1)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}
