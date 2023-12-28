#include <bits/stdc++.h>
using namespace std;

    int findCheapestPrice(int n, vector<vector<int>>& f, int src, int dst, int k) {
        vector<vector<pair<long long int,long long int>>> flights(n);
        for(auto i:f)
        {
            flights[i[0]].push_back({i[1], i[2]});
        }
        vector<long long int> dist(n+1, INT_MAX);
        dist[src] = 0;
        queue<long long int>q;
        q.push(src);
        int level=0;
        while(level<=k && q.size())
        {
            long long int node = q.front();
            q.pop();
            for(int i = 0; i<flights[node].size(); i++)
            {
                if(dist[flights[node][i].first] > (dist[node] + flights[node][i].second))
                {
                    dist[flights[node][i].first] = (dist[node] + flights[node][i].second);
                    q.push(flights[node][i].first);
                }
            }
            level++;
        }
        long long int check = INT_MAX; 
        if(dist[dst] == check)return -1;
        return dist[dst];
    }

    int main()
    {
        vector <vector<int>> v = {{0,1,1}, {0,2,5}, {1,2,1}, {2,3,1}};
        cout<<findCheapestPrice(4,v,0,3,1);
    }