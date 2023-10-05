#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int x1,x2;
        int maximum  = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>x1;
            a[i]-=x1;
            maximum = max(maximum, a[i]);
        }
        vector <int> v;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == maximum)v.push_back(i);
        }
        cout<<v.size()<<endl;
        for(int i = 0;i<v.size(); i++)
        {
            cout<<v[i]+1<<" ";
        }
        cout<<endl;
    }
}