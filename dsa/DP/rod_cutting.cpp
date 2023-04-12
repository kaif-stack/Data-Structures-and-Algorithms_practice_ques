#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> t(1001, vector<int>(1001,-1));


// int rc(int arr[],int val[],int length, int n)
// {
//     if(length==0 || n==0)
//     {
//         return 0;
//     }
//     if(arr[n-1]>length)
//     {
//         return rc(arr,val,length,n-1);
//     }
//     else
//     {
//         return    max (  rc(arr,val,length,n-1)    ,   val[n-1]+rc(arr,val,length-arr[n-1], n)  );
//     }
// }

// int rc(int arr[],int val[],int length, int n)
// {
//     if(length==0 || n==0)
//     {
//         return t[n][length]=0;
//     }
//     if(t[n][length]!=-1)
//     {
//         return t[n][length];
//     }
//     if(arr[n-1]>length)
//     {
//         return t[n][length]=rc(arr,val,length,n-1);
//     }
//     else
//     {
//         return t[n][length]=max(rc(arr,val,length,n-1),val[n-1]+rc(arr,val,length-arr[n-1], n));
//     }
// }

int rc(int arr[],int val[],int length, int n)
{

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < length+1; j++)
        {
            if(i==0 || j==0)
            {
                t[i][j]=0;
            }
            else{
                    if(arr[i-1]>j)
                    {
                        t[i][j]=t[i-1][j];
                    }
                    else
                    {
                        t[i][j]= max(t[i-1][j],val[i-1]+t[i][j-arr[i-1]]);
                    }
            }
        }
        
    }
    return t[n][length];
    
}


int main()
{
    int n=8;
    int arr[]={1,2,3,4,5,6,7,8};
    int val[]={1,5,8,9,10,17,17,20};
    int length=8;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<rc(arr,val,length,n)<<endl; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < length; j++)
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

