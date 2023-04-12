#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int length=0;
        ListNode *temp = head;
        
        while(temp!=NULL) 
        {
          length++;
          temp = temp->next;
        }
        if(length==n)
        {
            ListNode *del = head;
            head = head->next;
            delete del;
            return head;
        }

        int ptr = length-n-1;
        temp=head;
        int count = 0;
        while(temp!=NULL) 
        {
          if(ptr==count)
          {
            ListNode *del = temp->next;
            temp->next = temp->next->next;
            delete del;
          }
          temp = temp->next;
          count++;
        }
        return head;
    }

    int main()
    {
      ListNode *head= new ListNode(1);
      head->next = new ListNode(2);
      // head->next->next = new ListNode(3);
      // head->next->next->next = new ListNode(4);
      // head->next->next->next->next = new ListNode(5);
      // head->next->next->next->next->next = new ListNode(6);
      // head->next->next->next->next->next->next = new ListNode(7);
      // head->next->next->next->next->next->next->next = new ListNode(8);
      head=removeNthFromEnd(head, 2);
      cout<<"head->next->next->next->next->next";
      

    }