// https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/

class Solution
{
private:
    int count = 0, result = 0;
    // inorder of BST traverse in ascending and reverse inorder (right root left) traverse in descending
    void inorder(TreeNode *root, int k)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left, k);
        count++;
        if (count == k)
        {
            result = root->val;
            return;
        }
        inorder(root->right, k);
    }

public:
    int kthSmallest(TreeNode *root, int k)
    {
        inorder(root, k);
        return result;
    }
};