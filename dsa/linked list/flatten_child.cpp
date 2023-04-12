#include <bits/stdc++.h>
using namespace std;

class List{
      public:
      int data;
      List *next;
      List *child;
      List(int s)
      {
        data = s;
        next = NULL;
        child = NULL;
      }
};
void displayList(List *head)
{
    while(head)
    {
        cout<<"->"<<head->data;
        head = head->next;
    }
}

void flattenList(List *head)
{
    queue <List*> q;
    int size = q.size();
    List *temp = head;
    q.push(temp);

    while(q.size() > 0 && temp)
    {
        if (temp->child)
        {
            if(q.front() == head)
            {
                q.pop();
            }
            q.push(temp->child);
            temp->child = NULL;
        }
        if(!temp->next)
        {
            if(q.size() == 0)
            {
                break;
            }
            temp->next = q.front();
            q.pop();
        }
        if(q.front() == head)
        {
            q.pop();
        }
        temp = temp->next;
    }
}

int main()
{
    List *head= new List(1);
    head->next = new List(2);
    head->next->next = new List(3);
    head->next->next->next = new List(4);
    head->next->next->next->next = new List(5);
    head->child = new List(6);
    head->child->next = new List(7);
    head->child->next->next = new List(8);
    head->child->next->child = new List(11);
    head->child->next->next->child = new List(12);
    head->child->next->next->child->child = new List(15);
    head->next->next->next->child = new List(9);
    head->next->next->next->child->next = new List(10);
    head->next->next->next->child->child = new List(13);
    head->next->next->next->child->child->next = new List(14);
    head->next->next->next->child->child->child = new List(16);
    head->next->next->next->child->child->child->next = new List(17);
    flattenList(head);
    displayList(head);
}