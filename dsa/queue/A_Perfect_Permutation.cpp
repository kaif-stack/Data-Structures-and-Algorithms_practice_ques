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
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
        cout<<n<<" ";
        for (int i = 2; i <= n; i++)
        {
            cout<<i-1<<" ";
        }
        cout<<endl;
        }
        
    }
}