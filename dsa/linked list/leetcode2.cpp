#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  void push(ListNode* head_ref, int new_data)
{
	/* allocate node */
	ListNode* new_node =new ListNode();

	/* put in the data */
	new_node->val = new_data;

	/* link the old list off the new node */
	new_node->next = head_ref;

	/* move the head to point to the new node */
	head_ref = new_node;
}
 

// void add1(ListNode* l, ListNode* res, int carry)
// {
//     if(l!=NULL)
//     {
//         ListNode* newnode=new ListNode(l->val);
//         res= new ListNode(l->val);
//         add1(l->next,res->next, 0);
//     }
// } 

// void add(ListNode*l1, ListNode*l2, ListNode* res ,int carry)
// {
//     int sum=l1->val+l2->val+carry;
//     if(l1!=NULL && l2!=NULL)
//     {
//         if(sum<10)
//         {   
//             res=&ListNode(sum);
//             add(l1->next,l2->next, res->next, 0);
//         }
//         else
//         {
//             res= new ListNode(sum-10);
//             add(l1->next,l2->next, res->next, 1);  
//         }
//     }
//     else
//     {
//         if(l1==NULL && l2!=NULL)
//         {
//             add1(l2->next,res->next, carry);
//         }
//         if(l1!=NULL && l2==NULL)
//         {
//             add1(l1->next,res->next, carry);
//         }
//     }
    
// }

// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
// {
//         ListNode* res;
//         ListNode* head;
//         int sum=l1->val+l2->val;
//         if(sum<10)
//         {
//             res=&ListNode(sum);
//             add(l1->next, l2->next, res->next, 0);
//         }
//         else
//         {
//             res=&ListNode(sum-10);
//             add(l1->next, l2->next, res->next,1);
//         }

// } 

int main()
{
    ListNode* head1;
    ListNode* head2;
    ListNode** l1=&head1;
    ListNode** l2=&head2;
    push(head1, 9);
    push(head1, 9);
    push(head1, 9);
    push(head1, 9);
    push(head1, 9);
    push(head1, 9);
    push(head2, 9);
    push(head2, 9);
    push(head2, 9);
    push(head2, 9);
    ListNode* res;
    // res=addTwoNumbers(head1, head2);
    cout<<"end";

}