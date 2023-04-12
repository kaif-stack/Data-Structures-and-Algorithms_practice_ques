#include <bits/stdc++.h>
using namespace std;
int ks(int wt[], int val[],int w, int n);

vector<vector<int>> t(1001, vector<int>(1001,-1));

// int  ks(int wt[], int val[], int w, int n)
// {
//     if(w==0 || n==0)
//     {
//         t[w][n]=0;
//     }
//     for (int i = 1; i < n+1; i++)
//     {
//         for (int j = 1; j < w+1; j++)
//         {
//             if(wt[i-1]<=j)
//             {   
//                 return t[j][i]=max(val[i-1]+t[w-wt[i-1]][i-1],t[w][n-1]);
//             }
//             else if (wt[n-1]>w)
//             {
//                 return t[w][n]=t[w][n-1];
//             }
//         }
        
//     }
    
    // if(t[w][n]!=-1)
    // {
    //     return t[w][n];
    // }
    // if(wt[n-1]<=w)
    // {   
    //     return t[w][n]=max(val[n-1]+t[w-wt[n-1]][n-1],t[w][n-1]);
    // }
    // else if (wt[n-1]>w)
    // {
    //     return t[w][n]=t[w][n-1];
    // }
// }

int main()
{
    int n=4;
    // cin>>n;
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int w=7;
    cout<<ks(wt,val,w,n); 
}


// int ks(int wt[], int val[],int w, int n)  //by recursion
// {
//     if(n==0 || w==0) //base condition
//     {
//         return 0;
//     }
//     if(wt[n-1]>w) //case for when weight is greater than the size of knapsack
//     {
//         return ks(wt,val,w,n-1);
//     }
//     else
//     {
//         return max(ks(wt,val,w,n-1), val[n-1] + ks(wt,val,w-wt[n-1],n-1)); //case when we have choice of selection
//     }
// }

// int ks(int wt[], int val[],int w, int n)  //by memoization
// {
//     if(n==0 || w==0) //base condition
//     {
//         return 0;
//     }
//     if(t[w][n]!=-1)
//     {
//         return t[w][n];
//     }
//     if(wt[n-1]>w) //case for when weight is greater than the size of knapsack
//     {
//         return t[w][n]=ks(wt,val,w,n-1);
//     }
//     else
//     {
//         return t[w][n]=max(ks(wt,val,w,n-1), val[n-1] + ks(wt,val,w-wt[n-1],n-1)); //case when we have choice of selection
//     }
// }

int ks(int wt[], int val[],int w, int n)  //by top-down dp
{   
    for (int i = 0; i < w+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            if(n==0 || w==0) //base condition
            {
                t[i][j]=0;
            }
            else
            {
                if(wt[i-1]<=w)
                {
                    t[i][j]=max(val[i+1]+t[i-1][j-wt[i-1]],t[i-1][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
                 
            }
        }
        
    }
    return t[n][w];
    
















    if(n==0 || w==0) //base condition
    {
        return 0;
    }
    if(wt[n-1]>w) //case for when weight is greater than the size of knapsack
    {
        return ks(wt,val,w,n-1);
    }
    else
    {
        return max(ks(wt,val,w,n-1), val[n-1] + ks(wt,val,w-wt[n-1],n-1)); //case when we have choice of selection
    }
}