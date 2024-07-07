/*
class Solution
{
public:
    int fun(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int l = fun(root->left);
        int r = fun(root->right);
        return max(l, r) + 1;
    }
    int maxDepth(TreeNode *root)
    {
        return fun(root);
    }
};
*/