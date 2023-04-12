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

    bool check (TreeNode *root, int min , int max)
    {
        if(!root->left && !root->right)return true;
        if(!root->left && root->right)
        {
            if(root->val > root->right->val)return false;
            if(root->val > max)max = root->val;
            return check(root->right, , );
        }
        if(root->left && !root->right)
        {
            if(root->val < root->left->val)return false;
            return check(root->right);
        }
        if((root->val < root->left->val) || (root->val > root->right->val))return false;
        return (check(root->right) && check(root->right));
    }


    bool isValidBST(TreeNode* root) {
        return check( root, root->val, root->val);
    }