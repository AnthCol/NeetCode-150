class Solution {
public:
    void invert(TreeNode * root)
    {
        if (root == NULL)
        {
            return; 
        }
        TreeNode * temp = root->right; 
        root->right = root->left; 
        root->left = temp; 

        invert(root->right); 
        invert(root->left); 

        return; 
    }

    TreeNode* invertTree(TreeNode* root) {
        invert(root); 
        return root; 
    }
};
