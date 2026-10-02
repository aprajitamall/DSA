/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        int left_d=minDepth(root->left);
        int right_d=minDepth(root->right);
        if(root->left==NULL)
        return right_d+1;
        if(root->right==NULL)
        return left_d+1;
        return min(left_d,right_d)+1;
        
    }
};