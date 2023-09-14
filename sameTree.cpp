class Solution {
public:
    int flag; 
    void check(TreeNode * p, TreeNode * q)
    {
        if (p != NULL && q != NULL)
        {
            if (p->val != q->val)
            {   
                flag = 1; 
                return; 
            }
            check(p->left, q->left); 
            check(p->right, q->right);   
        }
        else if (p == NULL && q == NULL)
        {
            return; 
        }
        else
        {
            flag = 1; 
            return; 
        }

    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        flag = 0; 
        check(p, q); 
        return (flag == 0); 
    }
};
