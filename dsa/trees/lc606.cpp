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

    string ans;
    void print(TreeNode *node) 
    {
        
        ans += to_string(node->val);
        if(node->left)
        {
            ans += "(";
            print(node->left);
            ans += ")";
        }
        if(node->right && !node->left)
        {
            ans += "()";
        }
        if(node->right)
        {
            ans += "(";
            print(node->right);
            ans += ")";
        }
        
    }

      string tree2str(TreeNode* root) {
        print (root);
        return ans;
    }

    int main()
    {
        TreeNode* root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        // root->left->left = new TreeNode(1);
        root->left->right = new TreeNode(4);
        string s=tree2str(root);
        cout<<s<<endl;

    }