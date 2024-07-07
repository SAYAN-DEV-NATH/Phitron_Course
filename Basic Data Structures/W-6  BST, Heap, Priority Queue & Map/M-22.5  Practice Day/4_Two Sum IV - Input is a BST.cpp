/*

class Solution
{
public:
    void fun(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        v.push_back(root->val);
        fun(root->left, v);
        fun(root->right, v);
    }
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> v;
        fun(root, v);
        int n = v.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] + v[j] == k)
                    return true;
            }
        }
        return false;
    }
};

*/