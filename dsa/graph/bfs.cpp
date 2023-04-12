#include <bits/stdc++.h>
using namespace std;


const int N = 1e5+10;
bool vis[N];
vector <int> g[N];
vector <int> bf;


void bfs(int vertex)
{
    int level = 0;
    queue <int> q;
    while(q.size() > 0)
    {
        level = q.size();
        for (int i = 0; i <= level; i++)
        {
            if(!vis[level])
            {
                vis[level] = true;
                for(auto x:g[level])
                {
                    q.push(x);
                }                
            }
        }
        cout<<endl;
        
    }
}


int main()
{
    int n = 6,e;
    g[1].push_back(2);
    g[2].push_back(1);
    g[1].push_back(6);
    g[6].push_back(1);
    g[1].push_back(3);
    g[3].push_back(1);
    g[2].push_back(6);
    g[6].push_back(2);
    g[2].push_back(5);
    g[5].push_back(2);
    g[3].push_back(4);
    g[4].push_back(3);
    g[3].push_back(5);
    g[5].push_back(3);
    g[4].push_back(5);
    g[5].push_back(4);
    g[4].push_back(6);
    g[6].push_back(4);
}