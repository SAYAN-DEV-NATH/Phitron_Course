/*
#include <bits/stdc++.h>
void fun(BinaryTreeNode<int> *root, long long &sum)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
        sum += root->left->data;
    fun(root->left, sum);
    fun(root->right, sum);
}
long long leftSum(BinaryTreeNode<int> *root)
{
    long long sum = 0;
    fun(root, sum);
    return sum;
}
*/