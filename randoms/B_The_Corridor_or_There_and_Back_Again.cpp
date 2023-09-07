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
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i][0]>>arr[i][1];
        }
        long long int max = INT_MAX;
        int check;
        for (int i = 0; i < n; i++)
        {
            if(max <= arr[i][0])break;
            int l = arr[i][1]/2;
            check = arr[i][1]%2;
            if(check == 0)
            {
                if((arr[i][0] + l -1) < max)
                {
                   max = arr[i][0] + l -1;
                }
            }
            else
            {
                if((arr[i][0] + l ) < max)
                {
                   max = arr[i][0] + l;
                }
            }
        }
            cout<<max<<endl;
                
    }
}