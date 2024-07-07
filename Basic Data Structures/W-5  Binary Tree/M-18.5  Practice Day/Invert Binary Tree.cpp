/*
class Solution
{
public:
    void fun(TreeNode *&root)
    {
        if (root == NULL)
            return;
        fun(root->left);
        fun(root->right);
        swap(root->left, root->right);
    }
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
            return root;
        fun(root);
        return root;
    }
};
*/