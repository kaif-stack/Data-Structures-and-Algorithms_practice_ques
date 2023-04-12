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

long long listnum(Node *head)
{
    long long int a=0;
    while(head) 
    {
        a=((a*10)+(head->data))%1000000007;
        head = head->next;
    }
    return a;
}

long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long int a, b;
    long long int N = 1000000007;
    a = listnum(l1);
    b = listnum(l2);
    a = a*b;
    return a%N;
}

int main()
{
        Node* l1 = new Node(2);
        l1->next = new Node(5);
        Node* l2 = new Node(2);
        l2->next = new Node(5);
        cout << multiplyTwoLists(l1, l2);
}