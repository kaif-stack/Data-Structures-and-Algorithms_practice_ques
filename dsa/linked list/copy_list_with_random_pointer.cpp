#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

    Node* copyRandomList(Node* head) {
        Node* p1 = head;
        Node* temp;
        while(p1)
        {
            temp = p1->next;
            p1->next = new Node(p1->val);
            p1->next->next = temp;
            p1 = temp;
        }
        p1 = head;
        while(p1)
        {
            p1->next->random = (p1->random)? p1->random->next : NULL;
            p1 = p1->next->next;
        }
        p1 = head;
        temp = head->next;
        Node* p2 = head;
        while(p1)
        {
            p2 = p1->next;
            p1->next = p2->next;
            p2->next = p1->next->next;
            p1 = p1->next;
            // p1->next = p1->next->next;
            // p2->next = p2->next->next;
            // p1 = p1->next;
            // p2 = p2->next;
        }
        return temp;
    }

    int main() {
            Node* head = new Node(1);
            head->next = new Node(2);
            head->next->next = new Node(3);
            head->random = head->next->next;
            head->next->random = head;
            head->next->next->random = head;
            Node *copy = copyRandomList(head);
    }