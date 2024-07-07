/*

class Solution
{
public:
    TreeNode *ans;
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == NULL)
            return NULL;
        if (root->val == val)
            ans = root;
        searchBST(root->left, val);
        searchBST(root->right, val);
        return ans;
    }
};

*/