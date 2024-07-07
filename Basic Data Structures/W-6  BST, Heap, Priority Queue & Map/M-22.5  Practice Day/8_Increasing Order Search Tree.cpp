/*

class Solution
{
public:
    void fun(TreeNode *root, queue<TreeNode *> &q)
    {
        if (root == NULL)
            return;
        fun(root->left, q);
        q.push(root);
        fun(root->right, q);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == NULL)
            return NULL;
        queue<TreeNode *> q;
        fun(root, q);
        root = q.front();
        q.pop();
        TreeNode *tmp = root;
        while (!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();
            tmp->left = NULL;
            tmp->right = f;
            tmp = f;
        }
        tmp->left = NULL;
        tmp->right = NULL;
        return root;
    }
};

*/