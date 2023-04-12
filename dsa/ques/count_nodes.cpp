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


    int rec(TreeNode* node)
    {
        if(node == NULL) return 0;
        return 1 + rec(node->left)  + rec(node->right);
    }

    int countNodes(TreeNode* root) {
        return rec(root);
    }