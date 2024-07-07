/*
int count(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
    {
        int l = count(root->left);
        int r = count(root->right);
        return l + r;
    }
}
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    return count(root);
}
*/