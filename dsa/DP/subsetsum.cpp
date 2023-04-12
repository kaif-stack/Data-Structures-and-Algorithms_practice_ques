#include <bits/stdc++.h>
using namespace std;
bool ss(int wt[],int sum, int n);

vector<vector<bool>> t(1000, vector<bool>(1000,-1));

int main()
{
    int n=3;
    // cin>>n;
    int wt[]={2,4,7};
    int sum=11;
    // cout<<ss(wt,w,n); 
    vector<vector<bool>> t(4, vector<bool>(12,-1));
    
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=sum; j++)
        {   
            if(i==0 && j>0)
            {
                t[i][j]=false;
            }
            else if(j==0)
            {
                t[i][j]=true;
            }
            
            else if(wt[i-1]>j)
            {
                t[i][j]=t[i-1][j];
            }
            else
            {
                t[i][j]=(t[i-1][j-wt[i-1]] || t[i][j-1]);  
            }
        }
        
    }
    cout<< t[n][sum];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
        
    }
}

// bool ss(int wt[], int w, int n) //recursion
// {
//     if(w==0)
//     {
//         return true;
//     }
//     if(n==0 && w>0)
//     {
//         return false;
//     }
//     if(wt[n-1]>w)
//     {
//         return ss(wt, w, n-1);
//     }
//     else
//     {
//         return (ss(wt, w-wt[n-1], n-1) || ss(wt, w, n-1));  
//     }
// }

// bool ss(int wt[], int w, int n) //memoization
// {
//     if(w==0)
//     {
//         return t[n][w]=true;
//     }
//     if(n==0 && w>0)
//     {
//         return t[n][w]=false;
//     }
//     if(t[n][w]!=-1)
//     {
//         return t[n][w];
//     }
//     else
//     {
//         if(wt[n-1]>w)
//         {
//             return t[n][w]=ss(wt, w, n-1);
//         }
//         else
//         {
//             return t[n][w]=(ss(wt, w-wt[n-1], n-1) || ss(wt, w, n-1));  
//         }
//     }
// }

bool ss(int wt[], int sum, int n) //topdown dp
{
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; i <=sum; j++)
        {   
            if(i==0 && j>0)
            {
                t[i][j]=false;
            }
            if(j==0)
            {
                t[i][j]=true;
            }
            
            if(wt[i-1]>j)
            {
                t[i][j]=t[j][i-1];
            }
            else
            {
                t[i][j]=(t[j-wt[i-1]][i-1] || t[j][i-1]);  
            }
        }
        
    }
    
    
    return t[n][sum];
    
    
}