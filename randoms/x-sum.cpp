#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include<algorithm>     
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int array[n][m];
        long int maximum=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>array[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long int curr=0;
                curr+=array[i][j];
                for (int k = 1; k <max(n,m); k++)
                {   if((i+k)<n && (j+k)<m)
                    {
                        curr+=array[i+k][j+k];
                    }
                    if((i+k)<n && (j-k)>=0)
                    {
                        curr+=array[i+k][j-k];
                    }
                    if((i-k)>=0 && (j+k)<m)
                    {
                        curr+=array[i-k][j+k];
                    }
                    if((i-k)>=0 && (j-k)>=0)
                    {
                        curr+=array[i-k][j-k];
                    }

                }
                if(curr>maximum)
                {
                    maximum=curr;
                }
                
            }
            
            
        }
        cout<<maximum<<endl;
        
    }

}

