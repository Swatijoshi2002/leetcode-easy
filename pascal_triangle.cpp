class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        vector<int>v;
        vector<int>prev;
        v.push_back(1);
         ans.push_back(v);
        int j=1;
        if( numRows==1)
        {
            return ans;
        }
        else{
            while(1)
            {
                prev=v;
                v.clear();
                int i=0;
                v.push_back(1);
                while(v.size()!=j)
                {
                    v.push_back(prev[i]+prev[i+1]);
                    i++;
                }
                v.push_back(1);
                ans.push_back(v);
                if(ans.size()==numRows)
                {
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};
