
#include <bits/stdc++.h>
using namespace std;

vector<int> eventualSafeNodes(vector<vector<int>> graph) {
        int V = graph.size();
        vector <int> indegree (V, 0);
        vector <int> toposort;
        queue <int> q;
        vector < vector<int>> adj(V);
        for(int i = 0; i < V; i++)
        {
            for (int j= 0;j<graph[i].size();j++)
            {
                adj[graph[i][j]].push_back(i);
            }
        }
        for(int i = 0; i < V; i++){for(int x:adj[i])indegree[x]++;}
        for(int i = 0; i<V;i++)
        {
            if(indegree[i] == 0)q.push(i);
        }
        while(q.size())
        {
            int x = q.front();
            q.pop();
            toposort.push_back(x);
            for(auto node:adj[x])
            {
                indegree[node]--;
                if(indegree[node] == 0)
                {
                    q.push(node);
                }
            }
        }    
        return toposort;    
    }

    int main() 
    {
        eventualSafeNodes({{1,2},{2,3},{5},{0},{5},{},{}});
    }