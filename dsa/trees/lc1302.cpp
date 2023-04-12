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

int deepestLeavesSum(TreeNode* root) {
        queue <TreeNode*> q;
        vector <int> v;
        q.push(root);
        v.push_back(root->val);
        while(q.size()>0)
        {
            int size = q.size();
            for(int i = 1; i <= size; i++)
            {
                TreeNode* temp = q.front();
                if(temp->left)
                {
                    q.push(temp->left);
                    v.push_back(temp->left->val);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                    v.push_back(temp->right->val);
                }
                q.pop();
            }
        }
        long long int ans = 0;
        for(int i = 0; i < v.size(); i++)
        {
            ans+=v[i];
        }
        return ans;
    }


    int main()
    {
            TreeNode* root = new TreeNode(3);
            root->left = new TreeNode(4);
            root->right = new TreeNode(5);
            root->left->left = new TreeNode(1);
            root->left->right = new TreeNode(2);
            cout<<deepestLeavesSum(root);
    }