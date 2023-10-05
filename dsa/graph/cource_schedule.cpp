

#include <bits/stdc++.h>
using namespace std;



    bool canFinish(int V, vector<vector<int>> arr){
        vector <int> indegree(V, 0);
        vector <vector <int>> adj(V);
        for(auto edge:arr)
        {
            adj[edge[1]].push_back(edge[0]);
            indegree[edge[1]]++;
        }
        queue <int> q;
        for(int i = 0; i < V; i++)
        {
            if(indegree[i] == 0)q.push(i);
        }
        int nodesVisited = 0;
        while(q.size())
        {
            int x = q.front();
            q.pop();
            nodesVisited++;
            for(auto node:adj[x])
            {
                indegree[node]--;
                cout<<node;
                if(indegree[node] == 0)q.push(node);
            }
        }
        if(nodesVisited == V)return true;
        return false;
    }


    int main()
    {
        cout<<canFinish(2, {{1,0}});
    }