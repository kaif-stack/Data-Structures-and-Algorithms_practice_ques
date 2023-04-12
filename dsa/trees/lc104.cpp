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

    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int l=1;
        while(q.size()>0) 
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            if(q.size()>0)
            {
                l++;
            }
        }
        return l;
    }

  int main()
  {

    TreeNode* root = new TreeNode(0);
    root->left = new TreeNode(2);
    root->right = new TreeNode(4);
    root->right->right = new TreeNode(-1);
    root->right->left = new TreeNode(3);
    root->left->left = new TreeNode(1);
    root->left->left->left = new TreeNode(5);
    root->left->left->right = new TreeNode(1);
    root->right->left->right = new TreeNode(6);
    root->right->right->right = new TreeNode(8);
    cout<<maxDepth(root);
  }