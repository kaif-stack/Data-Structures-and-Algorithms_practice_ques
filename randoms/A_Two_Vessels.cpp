#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int diff;
        c*=2;
        if(a>b)diff = a - b;
        else diff =b-a;
        if(diff%c == 0)
        {
            cout<< diff/c<<endl;
            continue;
        }
        cout<< (diff/c)+1<<endl;
    }
}