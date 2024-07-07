/*
class Solution
{
public:
    void fun(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
            v.push_back(root->val);
        fun(root->left, v);
        fun(root->right, v);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> v1, v2;
        fun(root1, v1);
        fun(root2, v2);
        return v1 == v2;
    }
};
*/