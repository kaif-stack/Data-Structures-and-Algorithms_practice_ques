// Simple C++ program to find n'th node from end
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

// by 2 pointer method
int printNthFromLast( struct Node* head, int n)
{
    struct Node* ptr1=head;
    struct Node* ptr2=head;
    int a=n;
    while(a--)
    {
        ptr1 = ptr1->next;
    }
    while(ptr1!=NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    cout<<
    ptr2->data;
    return 0;

}

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// int main()
// {
// 	struct Node* head = NULL;

//     push(&head, 20);
// 	push(&head, 4);
// 	push(&head, 15);
// 	push(&head, 35);

// 	printNthFromLast(head, 3);
// 	return 0;
// }

int main()
{
    llist ll;
 
    for (int i = 60; i >= 10; i -= 10)
        ll.insertAtBegin(i);
 
    ll.displaylist();
 
    for (int i = 1; i <= 7; i++)
        ll.nthFromEnd(i);
 
    return 0;
}