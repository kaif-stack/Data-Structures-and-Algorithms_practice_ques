#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, q;
    cin>>n>>q;
    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        long int option;
        cin>>option;
        if(option==1)
        {
            long int a, x;
            cin>>a>>x;
            long int count=0;
            arr[a-1]=x;
            for(int i = 0; i < n; i++)
            {
                count+=arr[i];
            }
            cout<<count<<endl;

            
        }
        else
        {
            long int x;
            cin>>x;
            for (int j = 0; j < n; j++)
            {
                arr[j]=x;
            }
            cout<<(n*x)<<endl;
            
        }
    }

    

}