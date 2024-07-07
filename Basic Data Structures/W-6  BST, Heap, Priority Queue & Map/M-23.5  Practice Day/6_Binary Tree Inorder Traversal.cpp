/* 

class Solution {
public:
    void fun(TreeNode* root, vector<int> &v){
        if(root==NULL) return;
        fun(root->left,v);
        v.push_back(root->val);
        fun(root->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        fun(root,v);
        return v;
    }
};  

*/