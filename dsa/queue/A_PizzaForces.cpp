#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int time;
        if(n<7)
        {time=15;}
        else if(n<9 && n>6)
        {time=20;}
        else if(n>8 && n<11)
        {time=25;}
        else if(n%2==1)
        {
            time=(n+1)*2.5;
        }
        else
        {
            time=n*2.5;
        }
        cout<<time<<endl;

    }
}