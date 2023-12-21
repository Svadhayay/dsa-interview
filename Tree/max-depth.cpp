// https://leetcode.com/problems/maximum-depth-of-binary-tree/

int maxDepth(TreeNode *root)
{
    if (!root)
        return 0;
    int leftHeight = maxDepth(root->left);
    int rightHeiht = maxDepth(root->right);
    return max(leftHeight, rightHeiht) + 1;
}