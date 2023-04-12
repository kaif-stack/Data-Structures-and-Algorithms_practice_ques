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

    vector<int> arr[1000];
    int s = 0;
    vector<vector<int> > ans;

    void inorder(TreeNode *node, int level)
    {
        if(node->left)inorder(node->left, level+1);
        arr[level].push_back(node->val);
        if(node->right)inorder(node->right, level+1);
        if(level >=s)
        {
            s = level;
        }

    }

     vector<vector<int>> levelOrder(TreeNode* root) 
    {
        inorder(root, 0);
        for (int i = 0; i <= s; i++)
        {
            ans.push_back(arr[i]);
        }
        
    }

    int main()
    {
        TreeNode* root = new TreeNode(3);
        root->left = new TreeNode(4);
        root->right = new TreeNode(5);
        root->left->left = new TreeNode(1);
        root->left->right = new TreeNode(2);

        vector<vector<int>> vec;
        vec=levelOrder(root);
        for(int i=0;i<vec.size();i++)
        {
            for(int j=0; j<vec[i].size();j++)
            {
                cout<<vec[i][j]<<" ";
            }
        }

    }