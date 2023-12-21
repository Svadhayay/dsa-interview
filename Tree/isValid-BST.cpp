// https://leetcode.com/problems/validate-binary-search-tree/description/

class Solution
{
private:
    vector<int> temp;

    // inorder traversal happens in sorting order
    // so adding the elements in temp list
    // if list will be sorted then BST else no
    int inorder(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        inorder(root->left);
        temp.push_back(root->val);
        inorder(root->right);
        return 0;
    }

public:
    bool isValidBST(TreeNode *root)
    {
        inorder(root);
        // checking if temp list is sorted
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] >= temp[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};
