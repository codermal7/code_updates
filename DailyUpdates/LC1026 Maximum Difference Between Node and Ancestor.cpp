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
    int maxAncestorDiff(TreeNode* root) {
        if (!root)
        {
            return 0;
        }
        int minVal = root->val, maxVal = root->val;
        
        differ(root, minVal, maxVal);
        return diff;
    }

private:
    int diff = 0;

    void differ(TreeNode* root, int minVal, int maxVal) {
        if (!root)
            return;
        diff = max(diff, max(abs(minVal - root->val), abs(maxVal - root->val)));
        minVal = min(minVal, root->val);
        maxVal = max(maxVal, root->val);
        differ(root->left, minVal, maxVal);
        differ(root->right, minVal, maxVal);
    }
};// Changed code 4
// Testing code for online compiler 2024-10-09T14:44:50
// Testing code for online compiler 2024-10-10T14:44:50
// Testing code for online compiler 2024-10-11T14:44:50
// Testing code for online compiler 2024-10-12T14:44:50
// Testing code for online compiler 2024-10-13T14:44:50
// Testing code for online compiler 2024-10-14T14:44:50
// Testing code for online compiler 2024-10-15T14:44:50
// Testing code for online compiler 2024-10-16T14:44:50
// Testing code for online compiler 2024-10-17T14:44:50
// Testing code for online compiler 2024-10-09T14:45:34
// Testing code for online compiler 2024-10-10T14:45:34
// Testing code for online compiler 2024-10-11T14:45:34
// Testing code for online compiler 2024-10-12T14:45:34
// Testing code for online compiler 2024-10-13T14:45:34
// Testing code for online compiler 2024-10-14T14:45:34
// Testing code for online compiler 2024-10-15T14:45:34
// Testing code for online compiler 2024-10-09T14:46:14
// Testing code for online compiler 2024-10-10T14:46:14
