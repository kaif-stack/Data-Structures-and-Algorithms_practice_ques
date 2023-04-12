#include <bits/stdc++.h>
using namespace std;
class ll 
{ 
    public:
    int data; 
    ll *next; 
};
void push(ll** head_ref, int new_data) 
{ 
    ll* new_node = new ll();  
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 

int main()
{
    int n,q;
    cin>>n>>q;
    ll* head = NULL;
    for (int i = 0; i < n; i++)
    {
        
    }
    
        
}