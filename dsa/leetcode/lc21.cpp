#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
    ListNode *temp;
    temp=new ListNode(0);
    ListNode *head=temp;

    while(l1!=NULL && l2!=NULL)
    {
        if(l1->val>=l2->val)
        {
            temp->next=new ListNode(l2->val);
            l2=l2->next;
            temp=temp->next;

        }
        else
        {
            temp->next=new ListNode(l1->val);
            l1=l1->next;
            temp=temp->next;   
        }
    }
    if(l1!=NULL)
    {
        temp->next=l1;
    }
    if(l2!=NULL)
    {
        temp->next=l2;
    }
    return head->next;

}

int main()
{
    ListNode* l1;
    ListNode* l2;
    ListNode* h1;
    ListNode* h2;

    l1=new ListNode(1);
    h1=l1;
    l2=new ListNode(1);
    h2=l2;
    l1->next=new ListNode(2);
    l1=l1->next;
    l1->next=new ListNode(4);
    l2->next=new ListNode(3);
    l2=l2->next;
    l2->next=new ListNode(4);
    ListNode* l3=mergeTwoLists(h1,h2);


}