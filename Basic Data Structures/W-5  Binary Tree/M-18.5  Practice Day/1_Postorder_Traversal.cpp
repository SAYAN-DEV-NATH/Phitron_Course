/*
void postOrder(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    postOrder(root->left, v);
    postOrder(root->right, v);
    v.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    postOrder(root, ans);
    return ans;
}
*/