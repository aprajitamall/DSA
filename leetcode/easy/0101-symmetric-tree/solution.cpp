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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;
        return issym(root->left,root->right);
    }
    private:
    bool issym(TreeNode* t1,TreeNode* t2)
    {
       if(t1==NULL&&t2==NULL)
       return true;
       if(t1==NULL||t2==NULL)
       return false;
       return(t1->val==t2->val&& issym(t1->left,t2->right)&& issym(t1->right,t2->left));
       
    }

};