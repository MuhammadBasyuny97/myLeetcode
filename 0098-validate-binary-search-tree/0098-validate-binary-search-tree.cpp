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
    private: 
    vector<int> list;
public:
    void TraverseInOrder(TreeNode* root){
        if(root == nullptr)
            return;
        if(root -> left)
            TraverseInOrder(root -> left );
        
        list.push_back(root -> val);
            
        if(root -> right)
            TraverseInOrder(root -> right );
            
    }
    bool isValidBST(TreeNode* root) {
       TraverseInOrder(root);
      size_t i{1}, s{list.size()};
        while(i < s ){
            if(list[i] <= list[i - 1])
                return false;
            ++i;
        }
     
        return  true;
    }
};