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
};// Testing code for online compiler 2024-09-27T22:51:00
// Testing code for online compiler 2024-09-28T22:51:00
// Testing code for online compiler 2024-08-08T22:53:03
// Testing code for online compiler 2024-08-09T22:53:03
// Testing code for online compiler 2024-08-10T22:53:03
// Testing code for online compiler 2024-08-11T22:53:03
// Testing code for online compiler 2024-08-12T22:53:03
// Testing code for online compiler 2024-08-13T22:53:03
// Testing code for online compiler 2024-08-14T22:53:03
// Testing code for online compiler 2024-08-15T22:53:03
// Testing code for online compiler 2024-08-16T22:53:03
// Testing code for online compiler 2024-08-17T22:53:03
// Testing code for online compiler 2024-08-18T22:53:03
// Testing code for online compiler 2024-08-19T22:53:03
// Testing code for online compiler 2024-08-20T22:53:03
// Testing code for online compiler 2024-08-21T22:53:03
// Testing code for online compiler 2024-08-22T22:53:03
// Testing code for online compiler 2024-08-23T22:53:03
// Testing code for online compiler 2024-08-24T22:53:03
// Testing code for online compiler 2024-08-25T22:53:03
// Testing code for online compiler 2024-08-26T22:53:03
// Testing code for online compiler 2024-08-27T22:53:03
// Testing code for online compiler 2024-08-08T22:26:49
// Testing code for online compiler 2024-08-09T22:26:49
// Testing code for online compiler 2024-08-10T22:26:49
// Testing code for online compiler 2024-08-11T22:26:49
// Testing code for online compiler 2024-08-12T22:26:49
// Testing code for online compiler 2024-08-13T22:26:49
// Testing code for online compiler 2024-08-14T22:26:49
// Testing code for online compiler 2024-08-15T22:26:49
// Testing code for online compiler 2024-08-16T22:26:49
// Testing code for online compiler 2024-08-17T22:26:49
// Testing code for online compiler 2024-08-18T22:26:49
// Testing code for online compiler 2024-08-19T22:26:50
// Testing code for online compiler 2024-08-20T22:26:50
// Testing code for online compiler 2024-08-21T22:26:50
// Testing code for online compiler 2024-08-22T22:26:50
// Testing code for online compiler 2024-08-23T22:26:50
// Testing code for online compiler 2024-08-24T22:26:50
// Testing code for online compiler 2024-08-25T22:26:50
// Testing code for online compiler 2024-08-26T22:26:50
// Testing code for online compiler 2024-08-27T22:26:50
// Testing code for online compiler 
// Testing code for online compiler 2024-10-06T22:27:51
// Testing code for online compiler 2024-10-07T22:27:51
// Changed code 4
// Testing code for online compiler 2024-06-16T17:21:38
// Testing code for online compiler 2024-06-17T17:21:38
// Testing code for online compiler 2024-06-18T17:21:38
// Testing code for online compiler 2024-06-19T17:21:38
// Testing code for online compiler 2024-06-20T17:21:38
// Testing code for online compiler 2024-06-21T17:21:38
// Testing code for online compiler 2024-06-22T17:21:38
// Testing code for online compiler 2024-06-23T17:21:38
// Testing code for online compiler 2024-06-24T17:21:38
// Testing code for online compiler 2024-06-25T17:21:38
// Testing code for online compiler 2024-06-26T17:21:38
// Testing code for online compiler 2024-06-27T17:21:38
// Testing code for online compiler 2024-06-28T17:21:38
// Testing code for online compiler 2024-06-29T17:21:38
// Testing code for online compiler 2024-06-30T17:21:38
// Testing code for online compiler 2024-07-01T17:21:38
// Testing code for online compiler 2024-07-02T17:21:38
