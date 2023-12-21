// https://leetcode.com/problems/diameter-of-binary-tree/

class Solution
{
private:
    // function calculate height of the tree
    // we are checking at each node if left height and right heights sum is
    // largest if so we will update the diameter
    int height(TreeNode *root, int &diameter)
    {
        if (root == NULL)
            return;
        int leftHeight = height(root->left, diameter);
        int rightHeight = height(root->right, diameter);

        // if the left + right hide > current diameter then update diameter.
        diameter = max(diameter, leftHeight + rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
};