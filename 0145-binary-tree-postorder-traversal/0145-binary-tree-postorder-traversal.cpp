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
      vector<int> ans;

    void preOrder(TreeNode* root) {
        if (root == NULL)
            return;
        preOrder(root->left);
        preOrder(root->right);
         ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
       preOrder(root);
       return ans;
    }
};