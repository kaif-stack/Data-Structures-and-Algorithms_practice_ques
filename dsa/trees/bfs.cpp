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