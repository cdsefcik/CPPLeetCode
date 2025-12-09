/*
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

 Runtime beats 100%, memory beats 14.49%

Example 1:


Input: p = [1,2,3], q = [1,2,3]
Output: true
Example 2:


Input: p = [1,2], q = [1,null,2]
Output: false
Example 3:


Input: p = [1,2,1], q = [1,1,2]
Output: false
 

Constraints:

The number of nodes in both trees is in the range [0, 100].
-104 <= Node.val <= 104

*/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    bool SameTree = true;

    SameTree = bfs(p, q);

    return SameTree;
    }

    
    bool bfs(TreeNode* root, TreeNode* root2){
        std::queue<TreeNode*> q; //Create a queue to process the nodes.
        std::queue<TreeNode*> q2; //Create a queue to process the nodes.
        
        q.push(root); //Enqueue the root node.
        q2.push(root2); //Enqueue the root node.

        if((root == nullptr) && (root2 == nullptr)){
            return true; //Handle empty tree
        }
        
        else if((root == nullptr) || (root2 == nullptr)){
            return false; //Handle empty tree
        }

        
         
        

        while(!q.empty() && !q2.empty()){

            TreeNode *current = q.front(); //Get the front node.
            TreeNode *current2 = q2.front(); //Get the front node.

            if(current->val != current2->val){
                return false;
            }

            q.pop(); //Dequeue the front node.
            q2.pop(); //Dequeue the front node.

            if(current->left == nullptr && current2->left !=nullptr){
                return false;
            }
            if(current->left != nullptr && current2->left ==nullptr){
                return false;
            }
            if(current->left !=nullptr && current2->left !=nullptr){
                if((current->left->val == 'null') && (current2->left->val == 'null')){
                    q.push(current->left);
                    q2.push(current2->left);
                }
                else if((current->left->val != 'null') && (current2->left->val == 'null')){
                    return false;
                }
                else if((current->left->val == 'null') && (current2->left->val != 'null')){
                    return false;
                }else{
                    q.push(current->left);
                    q2.push(current2->left);
                }
                
            }


            if(current->right == nullptr && current2->right !=nullptr){
                return false;
            }
            if(current->right != nullptr && current2->right ==nullptr){
                return false;
            }
            if(current->right !=nullptr && current2->right !=nullptr){
                if((current->right->val == 'null') && (current2->right->val == 'null')){
                    q.push(current->right);
                    q2.push(current2->right);
                }
                else if((current->right->val != 'null') && (current2->right->val == 'null')){
                    return false;
                }
                else if((current->right->val == 'null') && (current2->right->val != 'null')){
                    return false;
                }else{
                    q.push(current->right);
                    q2.push(current2->right);
                }
                
            }

            
        }

        return true;
    }
    

};
