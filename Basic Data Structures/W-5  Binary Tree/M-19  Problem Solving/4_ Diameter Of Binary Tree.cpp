/*
int mx = 0;
int maxHight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = maxHight(root->left);
    int r = maxHight(root->right);
    int d = l + r;
    mx = max(mx, d);
    return max(l, r) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    maxHight(root);
    return mx;
}
*/