/*

void fun(TreeNode<int> *&root, int val)
{
    if (root == NULL)
    {
        root = new TreeNode<int>(val);
        return;
    }
    if (val > root->val)
    {
        if (root->right == NULL)
            root->right = new TreeNode<int>(val);
        else
            fun(root->right, val);
    }
    else
    {
        if (root->left == NULL)
            root->left = new TreeNode<int>(val);
        else
            fun(root->left, val);
    }
}
TreeNode<int> *insertionInBST(TreeNode<int> *root, int val)
{
    fun(root, val);
    return root;
}

*/