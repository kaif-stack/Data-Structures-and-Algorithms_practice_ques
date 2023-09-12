
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)return head;
        int ptr = 0;
        ListNode* temp = head;
        while(ptr != (left-2)){
            temp = temp->next;
            ptr++;
        }
        ListNode* ptrLeft = temp;
        ListNode  *prev = NULL;
        ListNode *curr = temp->next;
        ListNode *n = temp->next->next;
        while(ptr != (right-1))
        {
            curr->next = prev;
            prev = curr;
            curr = n;
            n = n->next;
            ptr++;
        }
        ptrLeft->next->next = curr;
        ptrLeft->next = prev;
        cout<<"sada";
        return head;
    }

    int main() 
    {
    ListNode* l1;
    l1=new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(4);
    l1->next->next->next->next = new ListNode(5);
    ListNode* l3=reverseBetween(l1,2,4);


}