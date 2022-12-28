class Solution {
  public:
    int maxsum;
    int getmax(Node* root){
        
        if(!root) return 0;
        else if(!root->left  && !root->right){ maxsum = max(maxsum , root->data); return root->data;}
        
        int l = getmax(root->left);
        int r = getmax(root->right);
        
        int ans = root->data + l + r;
       
        maxsum  = max(maxsum , ans);
        
        return ans;
        
        
    }
    
    // Function to find largest subtree sum.
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        maxsum = INT_MIN;
         getmax(root);
        return maxsum;
        
    }
};
