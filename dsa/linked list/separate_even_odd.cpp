
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


    Node* divide(int N, Node *head){
        Node* even = NULL;
        Node * t1 = NULL, *t2 = NULL;
        Node * odd = NULL, *temp = head;

        while(temp)
        {
            if(temp->data%2 == 0)
            {
                if(!even)
                {
                    even = temp;
                    t1 = temp;
                    temp = temp->next;
                }
                else
                {
                    t1->next = temp;
                    t1 = t1->next;
                    temp = temp->next;
                }
            }
            else
            {
                if(!odd)
                {
                    odd = temp;
                    t2 = temp;
                    temp =  temp->next;
                }
                else
                {
                    t2->next = temp;
                    t2 = t2->next;
                    temp = temp->next;
                }
            }
        }
        if(!even)
        {
            even = odd;
        }
        else
        {
            t1->next = odd;
        }
        if(t2) t2->next = NULL;
        return even;
    }


//{ Driver Code heads.

int main() {
    // 17 -> 15 -> 8 -> 9 -> 2 -> 4 -> 6

    struct Node* head = new Node(2);
    head->next =  new Node(4);
    // head->next->next =  new Node(8);
    // head->next->next->next =  new Node(9);
    // head->next->next->next->next =  new Node(2);
    // head->next->next->next->next->next =  new Node(4);
    // head->next->next->next->next->next->next =  new Node(6);

    head = divide(7,head);

    cout<<"";

}

// } Driver Code Ends