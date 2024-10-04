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
};

//Code// Optimised the code 4
// Added code 4
// Added code 4
// Added code 4
// Added code 4
// Added code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Changed code 4
// Made minor testing changes for different ide's and online coding profiles 4
// Automated comment added on 2024-09-22
// Automated comment added on 2024-09-23
// Automated comment added on 2024-09-24
// Automated comment added on 2024-09-25
// Automated comment added on 2024-09-26
// Automated comment added on 2024-09-27
// Automated comment added on 2024-09-28
// Automated comment added on 2024-09-22
// Automated comment added on 2024-09-23
// Automated comment added on 2024-09-24
// Automated comment added on 2024-09-25
