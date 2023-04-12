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

        Node* segregate(Node *head) {
            if(head == NULL)return NULL;
            
            int arr[] = {0 , 0 , 0};
            Node * temp = head;
            while(temp != NULL)
            {
                arr[temp->data]++;
                temp = temp->next;
            }
            temp = head;
            int num = 0;
            if(arr[0] == 0)num++;
            while(temp != NULL)
            {
                if(arr[num] == 0)num++;
                temp ->data = num;
                temp = temp->next;
                arr[num]--;
            }
            return head;
        }

    int main()
    {
        Node* head = new Node(2);
        head->next = new Node(2);
        head->next->next = new Node(2);
        head->next->next->next = new Node(2);
        head->next->next->next->next = new Node(2);
        head->next->next->next->next->next = new Node(2);
        head->next->next->next->next->next->next = new Node(2);
        head->next->next->next->next->next->next->next = new Node(2);
        head->next->next->next->next->next->next->next->next = new Node(2);
        head->next->next->next->next->next->next->next->next->next = new Node(2);
        head = segregate(head);
        
    }