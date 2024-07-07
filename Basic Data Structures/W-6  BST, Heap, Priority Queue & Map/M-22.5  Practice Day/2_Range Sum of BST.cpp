/*

class Solution
{
public:
    int sum = 0;
    void fun(TreeNode *r, int l, int h)
    {
        if (r == NULL)
            return;
        if (r->val >= l && r->val <= h)
            sum += r->val;
        fun(r->left, l, h);
        fun(r->right, l, h);
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        fun(root, low, high);
        return sum;
    }
};

*/