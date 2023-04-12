#include <bits/stdc++.h>
using namespace std;

 struct Node {
    int data;
    struct Node *next;
        Node(int x) {
        data = x;
        next = NULL;
    }
};


    void removeLoop(Node* head)
    {
        Node *fast = head, *slow = head;
        Node * prev = NULL;
        while(fast != slow)
        {
            fast = fast->next->next;
            prev=slow;
            slow = slow->next;
        }
        fast = head;
        while(fast != slow)
        {
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }
        slow->next = NULL;
    }

    int main()
    {
    struct Node* start = new Node(1);
    start->next = new Node(2);
    start->next->next = new Node(3);
    start->next->next->next = new Node(4);
    start->next->next->next->next = new Node(5);
    start->next->next->next->next->next = new Node(6);
    start->next->next->next->next->next->next = new Node(7);
    start->next->next->next->next->next->next->next = start->next->next;
    removeLoop(start);
    }