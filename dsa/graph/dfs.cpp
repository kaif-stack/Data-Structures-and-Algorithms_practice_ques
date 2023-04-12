#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
bool vis[N];
vector <int> g[N];
vector <vector<int> > cc;
vector <int> ccc;
void dfs(int vertex)
{
    vis[vertex] = true;
    ccc.push_back(vertex);
    for (int child: g[vertex])
    {
        if (vis[child]) continue;
        dfs(child);
    }
}




int main()
{
    int n, e;
    cin>>n>>e;
    for(int i=0; i<e; ++i)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int c=0;

    for(int i=0; i<=n; i++)
    {
        if(vis[i])
        {
            continue;
        }
        ccc.clear();
        dfs(i);
        cc.push_back(ccc);
        c++;
    }
    cout<<cc.size()<<endl;
    for(auto c_cc : cc)
    {
        for(int vertex: c_cc)
        {
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
}