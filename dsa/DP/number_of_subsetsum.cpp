#include <bits/stdc++.h>
using namespace std;
int ks(int arr[],int sum, int n);
vector<vector<int>> t(1001, vector<int>(1001,-1));

int main()
{
    int n=4;
    // cin>>n;
    int arr[]={1,2,3,3};
    int sum=6;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<ks(arr,sum,n)<<endl; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            if(t[i][j]==1 || t[i][j]==4)
            {
                cout<<" "<<t[i][j]<<" ";
            }
            else
            {
                cout<<t[i][j]<<" ";
            }
        }
        cout<<endl;
        
    }
}

// int ks(int arr[],int sum, int n)
// {
//     if(sum==0)
//     {
//         return 1;
//     }
//     else if(n==0)
//     {
//         return 0;
//     }
//     if(arr[n-1]>sum)
//     {
//         return ks(arr,sum,n-1);
//     }
//     else
//     {
//         return (ks(arr,sum,n-1)+(ks(arr,sum-arr[n-1],n-1)));
//     }

// }

// int ks(int arr[],int sum, int n)
// {
//     if(sum==0)
//     {
//         return t[n][sum]=1;
//     }
//     if(n==0)
//     {
//         return t[n][sum]= 0;
//     }
//     if(t[n][sum]!=-1)
//     {
//         return t[n][sum];
//     }
//     if(arr[n-1]>sum)
//     {
//         return t[n][sum]=ks(arr,sum,n-1);;
//     }
//     else
//     {
//         return t[n][sum]=(ks(arr,sum,n-1)+(ks(arr,sum-arr[n-1],n-1)));
//     }

// }

int ks(int arr[],int sum, int n)
{

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {       
                    if(j==0)
                    {
                        t[i][j]=1;
                        continue;
                    }
                    if(i==0)
                    {
                        t[i][j]=0;
                        continue;
                    }
                    if(arr[i-1]>j)
                    {
                        t[i][j]= t[i-1][j];
                    }
                    else
                    {
                        t[i][j]= t[i-1][j]+t[i-1][j-arr[i-1]];
                    }
        }        
    }
    return t[n][sum];
    


}