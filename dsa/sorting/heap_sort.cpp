#include <bits/stdc++.h>
using namespace std;

class heap
{
    vector <int> v = {0};
    int size = 0;
    public:
    void push(int value)
    {
        size++;
        v.push_back(value);
        int x = size-1;
        while(x)
        {
            if(v[x/2]<v[x])
            {
                swap(v[x/2],v[x]);
                x=x/2;
            }
            else{break;}
        }
    }
    int del()
    {
        swap(v[0],v[size-1]);
        size--;
        int x = 0;
        
    }
};

int main()
{
    heap h;
    int arr[] = {0,1,2,3,4,5,6,7};
    for (int i = 0; i < 7; i++)
    {
        h.push(arr[i]);
    }
    cout << "@";
    

}