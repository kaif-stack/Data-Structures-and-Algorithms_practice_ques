#include <bits/stdc++.h>
using namespace std;    

vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector <int> indegree(V, 0);
	    queue <int> q;
	    for(int i = 0; i<V; i++)
	    {
	        for(int j = 0; j<adj[i].size(); j++)
	        {
	            indegree[adj[i][j]]++;
	        }
	    }
	    for(int i = 0; i < V; i++)
	    {
	        if(indegree[i] == 0)q.push(i);
	    }
	    vector <int> ans;
	    while(q.size())
	    {
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        for(int it:adj[node])
	        {
	            indegree[it]--;
	            if(indegree[it] == 0)
	            {
	                q.push(it);
	            }
	        }
	    }
	    return ans;
	}
    string findOrder(string dict[], int V, int K) {
        vector <int> adj[K];
        for(int i = 0; i < V-1; i++)
        {
            int l1 = dict[i].size();
            int l2 = dict[i+1].size();
            int minlen = min(l1,l2);
            for(int j = 0; j<minlen; j++)
            {
                if(dict[i][j] != dict[i+1][j])
                {
                    adj[dict[i][j]-'a'].push_back(dict[i+1][j] - 'a');
                    break;
                }
            }
        }
        vector <int> topo = topoSort(K, adj);
        string ans = "";
        for(int i:topo)
        {
            ans = ans + char(i + 'a');
        }
        return ans;
    }

    int main()
    {
        string dict[5] = {"baa","abcd","abca","cab","cad"};
        string s;
        s = findOrder(dict,5,4);
        cout<<s;
    }