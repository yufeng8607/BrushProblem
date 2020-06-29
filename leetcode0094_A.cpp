//二叉树后序遍历非递归形式  
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stackArr;
        vector<int> res;
        if(root == nullptr)
        {
            return res;
        }
        TreeNode* cur = root;
        while(cur != nullptr)
        {
            stackArr.push(cur);
            cur = cur->left;
        }
        while(!stackArr.empty())
        {
            cur = stackArr.top();
            stackArr.pop();
            res.push_back(cur->val);
            TreeNode* left_index = cur->right;
            while(left_index != nullptr)
            {
                stackArr.push(left_index);
                left_index = left_index->left;
            }
        }
        return res;
    }
};
