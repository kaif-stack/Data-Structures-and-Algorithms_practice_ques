#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* reverse(ListNode* p)

    {
        if(p == NULL || p->next == NULL)return p;
        
    ListNode* q=p;
    ListNode* s=p;
    while(p->next!=NULL)
    {
           p = p->next;
           ListNode* tempNode = new ListNode(p->val);
           tempNode->next = q;
           q = tempNode;
    }
    s->next=NULL;
    
    return q;
}
// void push(ListNode** head_ref, int new_data)
// {
// 	ListNode* new_node = new ListNode();
// 	ListNode *last = *head_ref;
// 	new_node->val = new_data;
// 	new_node->next = NULL;
// 	if (*head_ref == NULL)
// 	{
// 		*head_ref = new_node;
// 		return;
// 	}

// 		while (last->next != NULL)
// 	{
// 		last = last->next;
// 	}
// 	last->next = new_node;
// 	return;
// }

// This code is contributed by anmolgautam818, arkajyotibasak


// bool isPalindrome(ListNode* head) {

//     ListNode* fast;
//     ListNode* slow;
//     while(fast!=NULL && fast->next->next!=NULL)
//     {
//         fast=fast->next->next;
//         slow=slow->next;


//     }
// }

void push(ListNode** head_ref, int new_data)
{
   
    // 1. allocate node
    ListNode* new_node = new ListNode();
 
    // 2. put in the data
    new_node->val = new_data;
 
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
 
    // 4. Move the head to point to
    // the new node
    (*head_ref) = new_node;
}

int main()
{
    ListNode* head;
    

    push(&head, 1);
    push(&head,2 );
    push(&head,3 );
    push(&head,4 );
    push(&head,5 );
    head=reverse(head);
    cout<<"w";
}

