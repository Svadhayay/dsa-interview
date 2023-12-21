// https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            vector<int> level; // list to store level values

            int size = q.size(); // current size of queue = number of elements in the level

            // on each iteration queue will have all the elements of current level.
            for (int i = 0; i < size; i++)
            {
                // take the front element from the queue and put it in the level list
                TreeNode *node = q.front();
                level.push_back(node->val);
                // remove the element which has been addded to the level
                q.pop();
                // add to queue the next level of the current node.
                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};