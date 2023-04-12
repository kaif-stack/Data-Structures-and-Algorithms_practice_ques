#include <bits/stdc++.h>
using namespace std;
int ks(int arr[],int sum, int n);
vector<vector<int>> t(1001, vector<int>(1001,-1));

int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        int n=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<ks(arr,0,n)<<endl;
        
    }
}

int ks(int arr[],int sum, int n)
{
    if(n==0)
    {
        return arr[0];
    }
    if(n<0)
    {
        return 0;
    }
    return max(arr[n]+ks(arr,sum-arr[n],n-2), ks(arr,sum, n-1));
}