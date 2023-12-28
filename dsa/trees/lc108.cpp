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

TreeNode* rec(vector <int> &nums, int start, int end, int &size)
    {
        int mid = (start + end)/2;
        TreeNode* temp = new TreeNode(nums[mid]);
        if(start == end)return temp;
        temp->left = rec(nums, start, mid-1, size);
        temp->right = rec(nums, mid+1, end, size);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        return rec(nums, 0, size-1, size);        
    }

int main()
{
    vector <int> nums = {-10,-3,0,5,9};
    TreeNode* head = sortedArrayToBST(nums);
    cout<<"done";
}