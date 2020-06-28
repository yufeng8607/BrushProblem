//二叉树先序遍历非递归形式  
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<TreeNode*> stackArr;
        vector<int> res;
        if(root != nullptr)
        {
            stackArr.push_back(root);
            while(stackArr.empty() == false)
            {
                TreeNode* tn = stackArr.back();
                stackArr.pop_back();
                res.push_back(tn->val);
                if(tn->right != nullptr)
                {
                    stackArr.push_back(tn->right);
                }
                if(tn->left != nullptr)
                {
                    stackArr.push_back(tn->left);
                }
            }
        }
        return res;
    }
};
