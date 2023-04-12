#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

int push(struct node** headr, int value)
{
 	struct node* temp = new node();
	struct node* traverse = (*headr);
	if((*headr)==NULL)
	{
		(*headr) = new node();
		(*headr)->data = value;
		(*headr)->next = NULL;
		return 0;
	}

	while(traverse->next!=NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new node();
	traverse->next->next = NULL;
	traverse->next->data = value;
	return 0;

}

void makeloop(struct node** headr, int loopvalue)
{
	struct node* pointer;
	struct node* temp = (*headr);
	struct node* prev = NULL;
	int x=0, n=0;
	while(x==0)
	{
		if( n==loopvalue)
		{
			pointer=prev;
		}
		n++;
		prev=temp;
		temp=temp->next;
		if(temp->next==NULL)
		{
			temp->next = pointer;
			x=1;
		}	
	}
}

bool checkloop( struct node** headr)
{
	struct node* fastptr=(*headr);
	struct node* slowptr=(*headr);
	while(fastptr!=NULL && slowptr!=NULL)
	{	
		fastptr=fastptr->next->next;
		slowptr=slowptr->next;
		if(fastptr==slowptr)
		{
			return true;
		}
	}
	return false;
}

int looplength(struct node** headr)
{
	struct node* fastptr=(*headr);
	struct node* slowptr=(*headr);
	struct node*point;
	struct node*traverse;
	int length=1;
	while(fastptr!=NULL && slowptr!=NULL)
	{	
		fastptr=fastptr->next->next;
		slowptr=slowptr->next;
		if(fastptr==slowptr)
		{
			traverse=fastptr->next;
			point=fastptr;
			break;
		}
	}
	while(point!=traverse)
	{
		traverse=traverse->next;
		length++;
	}
	return length;
	

}

void deleteduplicates(struct node** headr)
{
    unordered_set <int> set;
    node* temp=(*headr), prev;
    while(temp->next!=NULL)
    {
        if(set.find(temp->data) != set.end())
        {
            // // node* p=temp->next;
            // // free (temp->next);
            // // temp=p;
            // node* p = temp->next;
            // free(temp);
            // temp = p;
            // next_next = current->next->next;
            // free(current->next);
            // current->next = next_next;
            prev=prev->next;
            temp=temp->next;
        }
        else
        {
            set.insert(temp->data);
            prev=temp; 
            temp=temp->next;
        }
    }

}

int main()
{	
	struct node* head=NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 3);
	push(&head, 5);
	push(&head, 6);
	deleteduplicates(&head);
	// cout<<looplength(&head);
	
}