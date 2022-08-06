class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size(); 
        if(n==0) //if no elements are present
            return NULL;
        if(n==1) //if only one element is present
            return new TreeNode(nums[0]); //create the root node with that element
        
        int mid = n/2; //finding the position of the middle element in the array
        TreeNode* root = new TreeNode(nums[mid]); //create root node with mid element
        
        vector<int> l (nums.begin(), nums.begin()+mid); //left subarray
        vector<int> r (nums.begin()+mid+1, nums.end()); //right subarray
        
        //using recursion to form the rest of the nodes :
        
        //the left nodes of the root must be smaller than root
        root->left = sortedArrayToBST(l); 
        
        //the right nodes of the root must be greater than root
        root->right = sortedArrayToBST(r);
        
        return root;
    }
};

2..........................................................

 void build(vector<int>& nums,TreeNode* root,int l,int r)
   {
       if(root==NULL)return;
       if(l<=r)
       {
       int mid=l+(r-l)/2;
        TreeNode* temp=new TreeNode(nums[mid]);
           if(temp->val<root->val)
           {
               root->left=temp;
                build(nums,root->left,l,mid-1);
                build(nums,root->left,mid+1,r);
            }
            if(temp->val>root->val)
           {
               root->right=temp;
                build(nums,root->right,l,mid-1);
                build(nums,root->right,mid+1,r);
            }
           
       }
   }    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        build(nums,root,0,mid-1);
        build(nums,root,mid+1,e);
        return root;
    }
};
