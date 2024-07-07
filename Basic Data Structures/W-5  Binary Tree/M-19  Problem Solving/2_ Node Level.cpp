/*
#include <bits/stdc++.h>

int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    queue<pair<TreeNode<int> *, int>> q;
    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> p = q.front();
        q.pop();
        TreeNode<int> *node = p.first;

        int level = p.second;
        if (node->val == searchedValue)
        {
            return level;
        }
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    return 0;
}
*/