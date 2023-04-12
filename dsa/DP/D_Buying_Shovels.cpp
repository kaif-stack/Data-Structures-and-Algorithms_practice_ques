#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        long long int n,k;
        cin>>n>>k;
        int x;
        long long int i =k;
        for (i; i > 0; i--)
        {
            if(n%i==0)
            {
                break;
            }
        }
        cout<<n/i<<endl;
        
    }
}