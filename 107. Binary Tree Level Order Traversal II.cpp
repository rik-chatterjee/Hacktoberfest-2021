//question link: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
//This is under hacktober fest



class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> level;
        
        queue<TreeNode*> q;
        if(root==NULL) return ans;
        
        q.push(root);
        
        while(!q.empty()){
            int size_level = q.size();
            for(int i=0; i<size_level; i++){
                
            TreeNode* t= q.front();
            q.pop();
            level.push_back(t->val);
            
                if(t->right) q.push(t->right);
                if(t->left)  q.push(t->left);
                
            }
            reverse(level.begin(), level.end());
           ans.push_back(level);
            level.clear();
        }
        
        reverse(ans.begin(), ans.end());
       
        return ans;
    }
};
