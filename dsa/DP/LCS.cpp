#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> t(1001, vector<int>(1001,-1));

// int lcs(string str, string str2, int n, int m)
// {
//     if(n==0 || m==0)
//     {
//         return 0;
//     }
//     if(str[n-1] == str2[m-1])
//     {
//         return (1+lcs(str,str2,n-1,m-1));
//     }
//     else
//     {
//         return max (lcs(str,str2,n-1,m) , lcs(str,str2,n,m-1));
//     }
// }

int lcs(string str, string str2, int n, int m)
{

    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                    continue;
                }
                if(str[i-1] == str2[j-1])
                {
                    t[i][j]=(1+t[i-1][j-1]);
                }
                else
                {
                    t[i][j]= max (t[i-1][j], t[i][j-1]);
                }
        }

        
    }
    return t[n][m];
}


int main()
{
    int n=6;
    string str="abcdgh";
    string str2="abedfhr";
    int m=7;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<lcs(str,str2,n,m)<<endl; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
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