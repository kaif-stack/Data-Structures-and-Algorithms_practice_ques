#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> t(1001, vector<int>(1001,-1));

int lis(vector <int> vec, int n, int length)
{
    if(length==0 || n==0)
    {
        return 0;
    }
    
    if()
}


int main()
{
    int n=8;
    vector <int> vec={10,9,2,5,3,7,101,18};
    int length= vec.size();
     for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<lis(arr,n,length)<<endl; 
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