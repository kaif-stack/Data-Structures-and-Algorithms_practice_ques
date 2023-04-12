#include <bits/stdc++.h>
using namespace std;

int ks(vector <int> v)
{
    int size=v.size();
    int u=1, d=1;
    if(size==1)
    {
        return 1;
    }
    for (int i = 0; i < size-1; i++)
    {
        if(v[i]<v[i+1])
        {
            u=d+1;
        }
        if(v[i]>v[i+1])
        {
            d=u+1;
        }

    }
    return max(u,d);
    

}



int main()
{
    int n;
    cin>>n;
    vector <int> v;
    int s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    
    //  for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < sum; j++)
    //     {
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    cout<<ks(v)<<endl; 
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < sum; j++)
    //     {
    //         if(t[i][j]==1 || t[i][j]==4)
    //         {
    //             cout<<" "<<t[i][j]<<" ";
    //         }
    //         else
    //         {
    //             cout<<t[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
        
    // }
}