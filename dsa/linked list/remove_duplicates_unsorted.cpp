#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

Node* removeDuplicates(struct Node* start)
{
    set <int> set;
    Node* ptr = start;  
    Node* prev = NULL;
    set.insert(start->data);
    ptr = ptr->next;
    prev=start;
    while (ptr != NULL) 
    {
        if (set.find(ptr->data) != set.end())
        {
            prev->next=ptr->next;
            ptr=ptr->next;
        }
        else
        {
            set.insert(ptr->data);
            prev=ptr;
            ptr = ptr->next;
        }
    }
    return start;

}

int main()
{
    struct Node* start = newNode(5);
    start->next = newNode(2);
    start->next->next = newNode(1);
    start->next->next->next = newNode(3);
    start->next->next->next->next = newNode(2);
    start->next->next->next->next->next = newNode(5);
    start->next->next->next->next->next->next = newNode(1);
    start->next->next->next->next->next->next->next = newNode(7);
    removeDuplicates(start);
    cout<<"a";
    
}