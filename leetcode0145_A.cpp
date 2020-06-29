//二叉树后序遍历非递归形式  
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stackArr;
        if(root == nullptr)
        {
            return res;
        }
        stackArr.push(root);
        while(!stackArr.empty())
        {
            TreeNode* cur = stackArr.top();
            stackArr.pop();
            res.push_back(cur->val);
            if(cur->left != nullptr)
            {
                stackArr.push(cur->left);
            }
            if(cur->right != nullptr)
            {
                stackArr.push(cur->right);
            }
        }
        for(int i = 0; i < res.size() / 2; ++i)
        {
            int tmp = res[i];
            res[i] = res[res.size()-i-1];
            res[res.size()-i-1] = tmp;
        }
        return res;
    }
};
