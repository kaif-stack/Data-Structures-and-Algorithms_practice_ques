#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int maximum(int a[],int n)
{
    int ma=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>ma)
        {
            ma=a[i];
        }
    }
    return ma;
}
int minimum(int a[],int n)
{
    int mi=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<mi)
        {
            mi=a[i];
        }
    }
    return mi;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int size;
        int a[size];
        cin>>size;
        for (int i = 0; i < size; i++)
        {
            cin>>a[i];
        }
        cout<<maximum(a, size)-minimum(a, size)<<endl;
    }
    
}