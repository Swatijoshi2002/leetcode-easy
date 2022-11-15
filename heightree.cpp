 int countNodes(TreeNode* root) {
       if(root==NULL)
       {
           return 0;
       }
        count++;
        countNodes(root->left);
        countNodes(root->right);
        return count;
    }
