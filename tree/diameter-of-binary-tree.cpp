/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        diameter = 0;

        height(root);

        return diameter;
    }

    int height(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }

        int LestHeight = height(node->left);
        int RightHeight = height(node->right);

        int currentDiameter = LestHeight + RightHeight;
        diameter = max(diameter, currentDiameter);

        return 1 + max(LestHeight, RightHeight);
    }
};