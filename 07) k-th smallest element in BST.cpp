/*Complete the function below

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Return the Kth smallest element in the given BST
   // int KthSmallestElement(Node *root, int K) {
        // add code here.
        int KthSmallestElement(Node *root, int &K) {
        if(!root) return -1;
        int ans=KthSmallestElement(root->left,K);
        if(ans!=-1) return ans;
        K--;
        if(K==0) return root->data;
        if(K>0) return KthSmallestElement(root->right,K);
    //}
    }
};
