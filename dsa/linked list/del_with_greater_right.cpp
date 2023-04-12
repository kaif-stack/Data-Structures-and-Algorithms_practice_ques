//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

        Node* reverseList(Node* head) {

        Node* prev = NULL;
        Node* curr = head;
        Node* next = head->next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }



    Node *compute(Node *head)
    {
        head = reverseList(head);

        int max= INT_MIN;
        Node* prev = head;
        Node* temp = head;
        while(temp)
        {
            if(max <= temp->data)
            {
                max = temp->data;
                prev =  temp;
                temp = temp->next;
            }
            else
            {
                prev->next = temp->next;
                temp = prev->next;
            }
        }
        return head = reverseList(head);

    }
    

   


//{ Driver Code Starts.

int main()
{
    // 12->15->10->11->5->6->2->3
    struct Node* start = new Node(12);
    start->next =  new Node(15);
    start->next->next =  new Node(10);
    start->next->next->next =  new Node(11);
    start->next->next->next->next =  new Node(5);
    start->next->next->next->next->next =  new Node(6);
    start->next->next->next->next->next->next =  new Node(2);
    start->next->next->next->next->next->next->next =  new Node(3);

    start = compute(start);
    
    cout<<"";
}
