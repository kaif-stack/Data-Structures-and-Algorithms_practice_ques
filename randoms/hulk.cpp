#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {   
         if(i==1  && i==n)
        {
            cout<<"I hate it";
        }
         else if(i==1 && i!=n)
        {
            cout<<"I hate ";
        }
        else if(i%2==0 && i==n)
        {
            cout<<"that I love it";
        }
        else if(i%2==1 && i==n)
        {
            cout<<"that I hate it";
        }
        else if(i%2==0)
        {
            cout<<"that I love ";
        }
        else if(i%2==1)
        {
            cout<<"that I hate ";
        }
         
    }
}