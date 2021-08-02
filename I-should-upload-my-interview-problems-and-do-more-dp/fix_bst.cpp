		7
	3		9
	
1	   4   8    17



		17
	3		9
	
1	   4   8    7



1) call inOrder(left)

left value < current < right value

2) call inOrder right


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
 
 ((()((())((())))))(
class Solution {
public:
    void recoverTree(TreeNode* root) {
        //Set prev as first one
        prev = new TreeNode(-2147483648);
        
        // Find in TreeNode* ptr to fix Time Complexity: O(n)
        findNodeToFix(root); 
        
        // Swap their values Time Complexity: O(1)
        int temp = firstToFix->val;
        firstToFix->val = secondToFix->val;
        secondToFix->val = temp;
    }
    
private:
    
    TreeNode* firstToFix;
    TreeNode* secondToFix;
    TreeNode* prev;
    
    
    void findNodeToFix(TreeNode* node){
        if(node != NULL){
            // left recursive call
            findNodeToFix(node->left);
            
            //check current node
            if(prev->val > node->val){
                if(firstToFix == NULL) firstToFix = node;
                else secondToFix = node;
            }  
            // update prev 
            prev = node;   
                
            // right recursive call
            findNodeToFix(node->right);
        }
    }

};
