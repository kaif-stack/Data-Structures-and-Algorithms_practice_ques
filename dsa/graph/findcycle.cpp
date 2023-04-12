#include <bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
bool vis[N];
vector <int> g[N];


bool dfs(int vertex, int par)
{
    bool iscyclic = false;
    
    vis[vertex] = true;
    for (int child: g[vertex])
    {
        if (vis[child] && child == par) continue;
        if (vis[child])
        {
            return true;
        }
        if(dfs(child, vertex)) return true;
    }
    return false;  
}




int main()
{
    int n, e;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bool cycle = false;

    for (int i=0; i<n; i++)
    {
        if(vis[i])
        {
            continue;
        }
        if(dfs(i, -1))
        {
            cycle = true;
            break;
        }
    }
    cout<<cycle;
}