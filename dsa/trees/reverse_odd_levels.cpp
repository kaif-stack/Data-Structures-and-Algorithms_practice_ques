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

  vector <queue <int>> list;
   void bfs(TreeNode* node)
   {
        queue <TreeNode*> q;
        q.push(node);
        int level=0;
        vector <pair<TreeNode*, int>> vec;
        TreeNode* first;
        while(q.size()>0) 
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                
                
                    if (temp->left)
                    {
                        q.push(temp->left);
                        if(level%2 == 0)vec.push_back({temp->left, temp->left->val});
                        
                    }
                    if (temp->right)
                    {
                        q.push(temp-> right);
                        if(level%2 == 0)vec.push_back({temp->right , temp->right->val});
                    }
            
            }
            if(vec.size()>0)
            {
                int  i=vec.size()-1;
                int x=0;
                while(i-x>= x)
                {
                    int temp = vec[x].first->val;
                    vec[x].first->val = vec[i-x].first->val;
                    vec[i-x].first->val = temp;
                    x++;
                }
                vec.clear();
            }
            
            level++;
        }

   }

    TreeNode* reverseOddLevels(TreeNode* root) {
        bfs(root);
        return root;
    }


    int main()
    {

        TreeNode* root= new TreeNode(0);
        root->left = new TreeNode(1);
        root->right = new TreeNode(2);
        root->left->left = new TreeNode(0);
        root->left->right = new TreeNode(0);
        root->right->left = new TreeNode(0);
        root->right->right = new TreeNode(0);


        root->left->left->left = new TreeNode(1);
        root->left->left->right = new TreeNode(1);
        root->left->right->left = new TreeNode(1);
        root->left->right->right = new TreeNode(1);
        root->right->left->left = new TreeNode(2);
        root->right->left->right = new TreeNode(2);
        root->right->right->left = new TreeNode(2);
        root->right->right->right = new TreeNode(2);


        cout<<reverseOddLevels(root);
    }