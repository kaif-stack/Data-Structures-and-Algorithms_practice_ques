#include <bits/stdc++.h>
using namespace std; 


vector<int> toposort(vector<vector<int>> &v,vector<int> &totalmonths,vector<int> &time, int &n)
    {
        vector<int> indegree(n,0);
        for(int i=0; i<n; i++)
            for(auto x:v[i])
                indegree[x]++;

        queue <int> q;
        vector <int>ans;

        for(int i = 0; i<n; i++)
            if(!indegree[i])
                {
                    q.push(i);
                    totalmonths[i] = time[i];
                }

        while(q.size())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int i=0; i<v[node].size(); i++)
            {
                indegree[v[node][i]]--;
                if(indegree[v[node][i]] == 0)
                {
                    q.push(v[node][i]);
                }
            }
        }
        return ans;
    }


    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>>v(n);
        int rsize = relations.size();
        for(int i = 0; i<rsize; i++)
        {
            v[relations[i][0]-1].push_back(relations[i][1]-1);
        }
        vector <int> totalmonths(n,0);
        vector <int> topo = toposort(v, totalmonths,time,n);
        
        int maximum=0;
        
        for(int i=0; i<topo.size(); i++)
        {
            for(int j = 0; j < v[topo[i]].size(); j++)
            {
                int temp = totalmonths[i]+time[topo[i]];
                if(temp>totalmonths[v[topo[i]][j]])totalmonths[v[topo[i]][j]] = temp;
            }
            totalmonths[topo[i]]+=time[i];
            maximum = max(maximum, totalmonths[topo[i]]);
        }
        return maximum;

    }


    int main(){
        vector <int> time = {1,2,3,4,5};
        vector <vector<int>> v = {{1,5}, {2,5}, {3,5}, {3,4}, {4,5}};
        cout<<minimumTime(5, v,time);
    }