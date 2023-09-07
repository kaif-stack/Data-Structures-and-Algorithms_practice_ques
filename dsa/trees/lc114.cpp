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

void flatten(TreeNode* root) {
        stack <TreeNode*> s;
        TreeNode* temp = root;
        while(temp || s.size())
        {
            if(temp->left && temp->right)
            {
                s.push(temp->right);
                temp->right = temp->left;
                temp->left = NULL;
            }
            if(temp->left && !temp->right)
            {
                temp->right = temp->left;
                temp->left = NULL;
            }
            if(!temp->right && s.size())
            {
                temp->right = s.top();
                s.pop();
            }
            temp = temp->right;
        }
    }

    int main()
    {
        TreeNode* root = new TreeNode(1);
        root->left = new TreeNode(2);
        // root->right = new TreeNode(5);
        root->left->left = new TreeNode(3);
        // root->left->right = new TreeNode(4);
        // root->right->right = new TreeNode(6);
        flatten(root);
        while(root)
        {
            cout<<root->val<< "  ";
            root = root->right;
        }
    }