#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==b[i])
        {
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }
}