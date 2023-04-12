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

    bool treecompare(TreeNode *a,TreeNode *b)
    {
        queue<TreeNode *> q, w;
        q.push(b);
        w.push(a);
        while(q.size() > 0)
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode* sub=q.front();
                q.pop();
                TreeNode* root=w.front();
                w.pop();
                if (sub->val != root->val) return false;
                if (sub->left && root->left)
                {
                    q.push(sub->left);
                    w.push(root->left);
                }
                if (sub->right && root->right)
                {
                    q.push(sub->right);
                    w.push(root->right);
                }
                if (!sub->right && root->right)return false;
                if (!sub->left && root->left)return false;
                if (sub->right && !root->right)return false;
                if (sub->left && !root->left)return false;

            }
            
        }
        return true;

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == NULL) return true;
        if (root == NULL && subRoot!=NULL) return false;
        queue<TreeNode*> q;
        q.push(root);
        bool flag = false;
        while(q.size()>0) 
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->val == subRoot->val)
                {
                    flag= treecompare(temp, subRoot);
                    if (flag) return true;
                    
                }
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
        }
        return flag;
    }


    int main()
    {

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    TreeNode* sub = new TreeNode(4);
    sub->left = new TreeNode(1);
    sub->right = new TreeNode(2);
    
    cout<<isSubtree(root, sub);
  }