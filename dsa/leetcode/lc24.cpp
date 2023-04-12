#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* temp = head;
        while(temp->next != NULL && temp->next->next=NULL)
        {
            
        }
    
};

int main()
{
    Solution sol;   
    ListNode* head = new ListNode(1);
    ListNode* tail = new ListNode(2);
    cout << sol.swapPairs(head) << endl;
    return 0;
}