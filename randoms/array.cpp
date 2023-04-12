#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
// https://codeforces.com/problemset/problem/1324/B
int main()
{
    int t=1;
    while(t--)
    {   int l=5;
        cin>>l;
        int array[l];
        int a;
        for(int q=0; q<l; q++)
        {
            cin>>array[q];
        }
        for(int c=0; c<l; c++)
        {
            for(int d=l; d>c; d--)
            {
                if((array[d]==array[d]) && ((d-c)>1))
                {
                    a=1;
                }
            }
        }
        if(a==1)
        {
            cout<<"NO"<<endl;
        }    
        else{cout<<"YES"<<endl;}


    }
}