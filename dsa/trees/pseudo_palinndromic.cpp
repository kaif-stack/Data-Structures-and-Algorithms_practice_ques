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

    map <int, int> m;
    int ans = 0;
    int checkpalindrome(map <int, int>)
    {
        int count = 0;
        for(auto it:m)
        {
            if(it.second%2 == 1)count++;
            if(count ==2)return 0;
        }
        return 1;
    }

    void dfs(TreeNode *root)
    {
        if(!root->left && !root->right)
        {
            m[root->val]++;
            ans+=checkpalindrome(m);
            m[root->val]--;
            return;
        }
        else{
            m[root->val]++;
            if(root->left) dfs(root->left);
            if(root->right) dfs(root->right);
            m[root->val]--;
        }
    }

int pseudoPalindromicPaths (TreeNode* root) {
    
    dfs(root);
    return ans;
}

int main()
{
    TreeNode* root= new TreeNode(2);
    root->left = new TreeNode(3);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(1);
    root->right->right = new TreeNode(1);
    cout<<pseudoPalindromicPaths (root);

}