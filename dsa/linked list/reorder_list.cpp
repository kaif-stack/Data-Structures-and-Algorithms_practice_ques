#include <bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
void reorderList(ListNode* head)
{
    vector<int> v;
    ListNode *temp = head;
    while(temp)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }
    int size = v.size()-1;
    int x=0;
    temp=head;
    while(temp && (x<=(size-x)))
    {
        temp->val = v[x];
        temp = temp->next;
        if(temp)
        {
            temp->val = v[size-x];
            temp = temp->next;
        }
        x++;
    }
}
