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
        int d[n], s[n];
        int max = INT_MAX;
        for(int i = 0; i<n; i++)
        {
            cin>>d[i]>>s[i];
            int x = d[i]+((s[i]-1)/2);
            max = min(max,x);
        }
        cout<<max<<endl;
    }
}