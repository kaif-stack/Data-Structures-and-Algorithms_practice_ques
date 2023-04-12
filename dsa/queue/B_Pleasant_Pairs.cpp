#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long int

int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        int size=3;
        // cin>>size;
        int n=size;
        int arr[]={6,1,5};
        // for (int i = 0; i < size; i++)
        // {
        //     cin>>arr[i];
        // }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            int x=arr[i];
            int multiple=1;
            if(x>1)
            {
                multiple=arr[i]-(i+1);
            }
            int j=((i+1/multiple)+1)*multiple;
            for (j; j <= n; j+=multiple)
            {
                if(x*arr[j]==(i+j+2))
                {
                    count++;
                }
            }
            
        }
        
    cout<<count<<endl;
    }
    

}

