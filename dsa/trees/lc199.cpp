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

    vector<int> rightSideView(TreeNode* root) {
        queue <TreeNode*> q;
        vector <int> v;
        if(root)q.push(root);
        while(q.size()>0)
        {
            int size = q.size();
            for(int i = 1; i <= size; i++)
            {
                TreeNode* temp = q.front();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                if(i = size)v.push_back(temp->val);
                q.pop();
            }
        }
        return v;
        
    }

int main()
{
        TreeNode* root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        root->left->right = new TreeNode(5);
        root->right->right = new TreeNode(4);
        vector <int> v;
        v = rightSideView(root);
}