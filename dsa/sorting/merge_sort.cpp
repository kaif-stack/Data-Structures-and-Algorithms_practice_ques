#include <bits/stdc++.h>
using namespace std;

void conquer(vector <int> v, int si, int mid, int ei)
{
    vector <int> copy;
    int p1 = si, p2 = mid+1;
    while(p1 <= mid && p2 <= ei)
    {
        if(v[p1] < v[p2])
        {
            copy.push_back(v[p1]);
            p1++;
        }
        else
        {
            copy.push_back(v[p2]);
            p2++;
        }
    }
    while(p1 <= mid)
    {
        copy.push_back(v[p1]);
        p1++;
    }
    while(p2 <= ei)
    {
        copy.push_back(v[p2]);
        p2++;
    }
    p1 = si;
    for (int i = 0; i <= copy.size(); i++)
    {
        v[p1] = copy[i];
        p1++;
    }
    
}

void divide(vector <int> v, int si, int ei)
{
    int mid = si + (ei-si)/2;
    if(ei <= si) return;
    divide(v, si, mid);
    divide(v, mid+1, ei);

    conquer(v, si, mid, ei);
}

int main()
{
    vector <int> v={9,6,8,5,4,7,3,2,7,1};
    int size = v.size();

    divide(v, 0, size-1);

    for(int i=0; i<size; i++)
    {
        cout<<v[i]<<" ";
    }

}