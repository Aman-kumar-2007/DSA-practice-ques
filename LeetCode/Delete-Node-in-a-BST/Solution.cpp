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
    int inorderSuccessor(TreeNode* root){
        TreeNode* temp=root->right;
        while (temp->left!=NULL){
            temp=temp->left;
        }
        return temp->val;


    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root==NULL){
            return root;
        }
        if (root->val==key){
            // if leaf node
            if (root->left==NULL && root->right==NULL){
                return NULL;
            }
            // one child
            if (root->left==NULL){
                return root->right;
            }
            if (root->right==NULL){
                return root->left;
            }
            // two children 
            int successor = inorderSuccessor(root);
            deleteNode(root,successor);
            root->val=successor;
        }
        else if (root->val>key){
            root->left=deleteNode(root->left,key);
        }else{
            root->right=deleteNode(root->right,key);
        }
        return root;
    }
};