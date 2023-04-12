#include <bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

   int maxi(TreeNode *node, int max)
   {
      if (node == NULL)
      {
        return 0;
      }
      if (node->val >= max)
      {
        return 1 + maxi(node->left, node->val) + maxi(node->right, node->val); 
      }
      else
      {
       return maxi(node->right, max) + maxi(node->left, max);
      }
   } 
 

    int goodNodes(TreeNode* root) {
       if (root == NULL) return 0;
       if (root->left == NULL && root->right == NULL) return 1;
       return maxi(root, root->val);
    }
