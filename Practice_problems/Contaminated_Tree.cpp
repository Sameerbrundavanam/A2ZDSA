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
class FindElements {
    public:
    
        TreeNode * dummy;
        unordered_set<int>ust;
        void build(TreeNode* root){
            if(!root) return;
    
            if(root->left){
                root->left->val = 2 * root->val + 1;
                ust.insert(root->left->val);
            }
            if(root->right){
                root->right->val = 2 * root->val + 2;
                ust.insert(root->right->val);
            }
            build(root->left);
            build(root->right);
        }
    
        FindElements(TreeNode* root) {
            root->val = 0;
            build(root);
            dummy = root;
        }
        
        // bool isPresent(TreeNode* dummy, int t){
        //     if(!dummy) return 0;
    
        //     if(dummy->val == t) return 1;
    
        //     return isPresent(dummy->left, t) or isPresent(dummy->right, t);
    
        // }
    
        bool find(int target) {
            ust.insert(0);
            if(ust.find(target) != ust.end()) return true;
            return false;
        }
    };
    
    /**
     * Your FindElements object will be instantiated and called as such:
     * FindElements* obj = new FindElements(root);
     * bool param_1 = obj->find(target);
     */