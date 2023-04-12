#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> t(1001, vector<int>(1001,-1));


// int coinchange(int coins[],int sum, int n)
// {
//     if(sum==0)
//     {
//         return 1;
//     }
//     if(n==0)
//     {
//         return 0;
//     }
//     if(sum<coins[n-1])
//     {
//         return coinchange (coins, sum, n-1);
//     }
//     else
//     {
//         return (    coinchange(coins, sum, n-1) + coinchange(coins, sum-coins[n-1], n)    );
//     }
// }

// int coinchange(int coins[],int sum, int n)
// {
//     if(sum==0)
//     {
//         return t[n][sum]=1;
//     }
//     if(n==0)
//     {
//         return t[n][sum]=0;
//     }
//     if(t[n][sum]!=-1)
//     {
//         return t[n][sum];
//     }
//     if(sum<coins[n-1])
//     {
//         return t[n][sum]=coinchange (coins, sum, n-1);
//     }
//     else
//     {
//         return  t[n][sum]=(    coinchange(coins, sum, n-1) + coinchange(coins, sum-coins[n-1], n)    );
//     }
// }

int coinchange(int coins[],int sum, int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
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
            if(j<coins[i-1])
            {
                t[i][j]=t[i-1][j];
            }
            else
            {
                t[i][j] = t[i-1][j] + t[i][j-coins[i-1]];
            }
        }
        
    }
    return t[n][sum];
    


    
}


int main()
{
    int n=3;
    int coins[]={1,2,3};
    int sum=5;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<coinchange(coins,sum,n)<<endl; 
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