#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1702/problem/C

void solve()
{
    int n,q;
    cin>>n>>q;
    map <int, vector <int>> m;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(m.find(x)==m.end())
        {
            m[x].push_back(i);
            m[x].push_back(i);
            continue;
        }
        m[x][1]=i;
    }
    int left,right;
    for (int i = 0; i < q; i++)
    {
        cin>>left>>right;
        if(m.find(left)!=m.end() && m.find(right)!=m.end())
        {
            if(m[left][0]<m[right][1])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    
    

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
