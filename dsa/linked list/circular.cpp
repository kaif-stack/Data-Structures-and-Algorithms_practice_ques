#include <bits/stdc++.h>
using namespace std;

struct ListNode {
int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

    ListNode *detectCycle(ListNode *head) {
        ListNode* temp=head;
        set <ListNode*> v;
        while(temp!=NULL)
        {
            if(v.find(temp)!=v.end())
            {
                return temp;
            }
            else
            {
                v.insert(temp);
            }
            temp=temp->next;

        }
        return NULL;
    }

int main()
{
    ListNode* l1=new ListNode(0);
    ListNode* h1=l1;

    vector <int> v={1,2,3,4,5};

    int size=v.size();
    ListNode* w;
    for (int i = 0; i < size; i++)
    {
        l1->next=new ListNode(v[i]);
        l1=l1->next;
        if(i==2)
        {
            w=
        }
    }
    

    cout<<detectCycle(h1->next);


}