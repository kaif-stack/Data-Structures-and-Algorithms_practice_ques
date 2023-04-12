#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = head->next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }


int main()
{
    ListNode* l1=new ListNode(0);
    ListNode* h1=l1;

    vector <int> v={1,2,3,4,5};

    int size=v.size();
    for (int i = 0; i < size; i++)
    {
        l1->next=new ListNode(v[i]);
        l1=l1->next;
    }
    

    ListNode* l3= reverseList(h1->next);
    cout<<"1";


}