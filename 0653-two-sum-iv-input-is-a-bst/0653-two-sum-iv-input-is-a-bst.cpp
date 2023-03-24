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
    bool findTarget(TreeNode* root, int k) {
        queue <TreeNode*> q;
        set<int> s;
        q.push(root);
        while(!q.empty()){
            TreeNode* front = q.front();
            if(front -> left)
              q.push(front -> left);
            if(front -> right)
              q.push(front -> right);
            
            int val = front -> val;
            int diff = k - val;
            if(s.count(diff)){
                return true;
            }
            else{
                s.insert(val);
            }
            q.pop();
            
        }
      return false;
    }
};