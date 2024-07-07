/*
void inOrder(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    inOrder(root->left, v);
    v.push_back(root->data);
    inOrder(root->right, v);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    inOrder(root, ans);
    return ans;
}
*/