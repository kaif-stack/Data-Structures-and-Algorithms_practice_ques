#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n;
        if(n==1)
        {cout<<1<<endl;}
        else if(n==2)
        {cout<<2<<endl;}

        else if((n-1)%3==0)
        {   int last=2;
            while(n>0)
            {
                if(last==2)
                {
                    cout<<1;
                    last=1;
                    n--;
                }
                else
                {
                    cout<<2;
                    last=2;
                    n=n-2;
                }
            }
            cout<<endl;

        }
        else
        {
            int last=1;
            while(n>0)
            {
                if(last==2)
                {
                    cout<<1;
                    last=1;
                    n--;
                }
                else
                {
                    cout<<2;
                    last=2;
                    n=n-2;
                }
            }
            cout<<endl;
        }
    }
}