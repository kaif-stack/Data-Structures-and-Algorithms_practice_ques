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

     vector<int> arr[100];
     int levels(TreeNode * node, int level)
     {
        if(node==NULL) return 0;
        arr[level].push_back(node->val);
       return 1+max(levels(node->left, level+1),levels(node->right, level+1));

     }

      vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if (root==NULL) return ans;
        int depth = levels(root, 0);
        for (int i=0; i<depth; i++)
        {   
            double x=0;
            for (int j=0; j<arr[i].size(); j++)
            {
               x+=arr[i][j];
            }
            ans.push_back(x/(arr[i].size()));

        }

        return ans;
        
    }


    int main()

    {
        TreeNode* root = new TreeNode(3);
        root->left = new TreeNode(9);
        root->right= new TreeNode(20);
        root->right->right= new TreeNode(7);
        root->right->left= new TreeNode(15);
        
        vector <double> average;
        average = averageOfLevels(root);


    }