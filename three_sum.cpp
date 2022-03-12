class Solution {
public:
    vector<int> two_sum(vector<int> &nums,int target)
    {
        vector<int>v;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            auto it=m.find(target-nums[i]);
            if(it!=m.end())
            {
                v.push_back(it->second );
                 v.push_back(i );
                break;
            }
            else 
            m[nums[i]]=i;
        }
       
        return v;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v1;
        map<string,string> m;
        if(nums.size()<3)
        {
            return v1;
        }
        if(nums.size()==3)
        {
            if(nums[0]+nums[1]+nums[2]==0)
            {
                vector<int> v;
                v.push_back(nums[0]);
                v.push_back(nums[1]);
                v.push_back(nums[2]);
                v1.push_back(v);
            }
            return v1;
        }
        sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++)
      {
          int x=nums[i];
          vector<int>temp=two_sum(nums,0-x);
          if(temp.size()==2)
          {
             
           string t;
                       t.push_back(nums[i]);
                       t+=" ";
                       t.push_back(nums[temp[0]]);
                       t+=" ";
                       t.push_back(nums[temp[1]]);
                       if(m.find(t)==m.end())    
                       {
                           vector<int>v;
                           v.push_back(nums[i]);
                            v.push_back(nums[temp[0]]);
                            v.push_back(nums[temp[1]]);
                           v1.push_back(v);
                            m[t]=t;
                       }
                   }
                   else continue;
               }
              
      return v1;
    }
};
