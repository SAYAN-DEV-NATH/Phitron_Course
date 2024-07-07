/*

class Solution
{
public:
    TreeNode *fun(vector<int> nums, int l, int r)
    {
        if (l > r)
            return NULL;
        int m = (l + r) / 2;
        TreeNode *root = new TreeNode(nums[m]);
        TreeNode *rootLeft = fun(nums, l, m - 1);
        TreeNode *rootRight = fun(nums, m + 1, r);
        root->left = rootLeft;
        root->right = rootRight;
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return fun(nums, 0, nums.size() - 1);
    }
};

*/