int sumSubarrayMins(vector<int>& arr) {
        int ans=0;
        size_t l=1000000007;
        
        for(int i=0;i<arr.size();i++)
        {
            int min=INT_MAX;
           for(int j=i;j<arr.size();j++)
           {
              if(arr[j]<min)
              {
                    min=arr[j];
                    ans+=arr[j];
                    ans=ans%l;
              }
              else 
              {
                ans+=min;
                ans=ans%l;
              }
           }
        }
        return ans%l;
    }
