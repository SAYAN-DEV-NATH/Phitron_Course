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
    int getMinimumDifference(TreeNode *root)
    {
        vector<int> v;
        fun(root, v);
        int n = v.size();
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int tmp = abs(v[i] - v[j]);
                if (tmp < ans)
                    ans = tmp;
            }
        }
        return ans;
    }
};

*/