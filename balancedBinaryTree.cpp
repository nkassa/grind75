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
    int diff = 0;
    bool isBalanced(TreeNode* root) 
    {
        if(!root)
        {
            return true;
        }
        dfs(root);
        return diff <= 1;
    }
    int dfs(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int left = dfs(root->left);
        int right = dfs(root->right);
        diff = max(diff, abs(left - right));
        return max(left,right)+1;
    }
};