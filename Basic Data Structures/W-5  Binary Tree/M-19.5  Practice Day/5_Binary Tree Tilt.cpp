/*
class Solution
{
public:
    int tilt = 0;
    int fun(TreeNode *root)
    {

        if (root == NULL)
            return 0;
        int l = fun(root->left);
        int r = fun(root->right);
        tilt += abs(l - r);
        return l + r + root->val;
    }
    int findTilt(TreeNode *root)
    {
        fun(root);
        return tilt;
    }
};
*/