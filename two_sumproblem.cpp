class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
       map<int,int>m;
        int t=target;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
           
                int temp=i;
                target=target-nums[temp];
                if(m.find(target)!=m.end())
                {
                    if(m[target]!=temp)
                    {
                    v.push_back(temp);
                    v.push_back(m[target]);
                     break;
                    }
                }
            target=t;
            }
        return v;
    }
};
