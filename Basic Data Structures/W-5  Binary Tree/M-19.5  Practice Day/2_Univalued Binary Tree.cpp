/*
class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        if (root->left == NULL && root->right == NULL)
            return true;
        int x = root->val;
        queue<TreeNode *> q;
        if (root)
            q.push(root);
        while (!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();
            if (f->val != x)
            {
                return false;
            }
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
        return true;
    }
};
*/