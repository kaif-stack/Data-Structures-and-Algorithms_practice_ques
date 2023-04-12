#include <bits/stdc++.h>
using namespace std;

struct ListNode {
int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

    ListNode* middleNode(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode *fast=head, *slow=head, *prev;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        if(fast->next==NULL)
        {
            return slow;
        }
        else
        {
            return slow->next;
        }
        

    }


int main()
{
    ListNode* l1=new ListNode(0);
    ListNode* h1=l1;

    vector <int> v={1,2,3,4,5,6};

    int size=v.size();
    for (int i = 0; i < size; i++)
    {
        l1->next=new ListNode(v[i]);
        l1=l1->next;
    }
    

    ListNode* l3= middleNode(h1->next);


}
