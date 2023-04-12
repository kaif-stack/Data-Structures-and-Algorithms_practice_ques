#include <bits/stdc++.h>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
 
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
        ListNode *prev = head;
        ListNode *fast = head, *slow = head;
        while(fast->next && fast->next->next)
        {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        if(!fast->next)
        {
            prev->next = prev->next->next;
        }
        if(fast->next && !fast->next->next)
        {
            slow->next = slow->next->next;
        }
        return head;
    }

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *temp = head;
    head->next = new ListNode(3);
    head= head->next;
    head->next = new ListNode(4);
    head= head->next;
    head->next = new ListNode(7);
    head= head->next;
    head->next = new ListNode(1);
    head= head->next;
    head->next = new ListNode(2);
    head= head->next;
    head->next = new ListNode(6);
    head= head->next;
    head = deleteMiddle(temp);
    cout<<"D";
}