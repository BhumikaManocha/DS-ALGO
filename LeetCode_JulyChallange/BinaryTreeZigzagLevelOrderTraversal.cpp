// Tgs : BFS
// Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

// For example:
// Given binary tree [3,9,20,null,null,15,7],
//     3
//    / \
//   9  20
//     /  \
//    15   7
// return its zigzag level order traversal as:
// [
//   [3],
//   [20,9],
//   [15,7]
// ]

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return {};
        queue<TreeNode*>Q;
        Q.push(root);
        bool f = true;
        while(!Q.empty()){
            Q.push(nullptr);
            vector<int>vec;
            while(Q.front()){
                TreeNode* temp = Q.front();
                Q.pop();
                vec.push_back(temp->val);
                if(temp->left)Q.push(temp->left);
                if(temp->right)Q.push(temp->right);
            }
            f =!f;
            Q.pop();
            if(f)reverse(begin(vec),end(vec));
            ans.push_back(vec);
            if(Q.empty())break;
        }
        return ans;
    }
};