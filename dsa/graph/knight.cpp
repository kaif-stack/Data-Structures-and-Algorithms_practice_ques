#include <bits/stdc++.h>
using namespace std;


int bfs(vector<int>&k,vector<int>&t, int N)
    {
        int level = 0;
        queue <pair<int,int>> q;
        q.push({k[0],k[1]});
        while(q.size())
        {
            level++;
            int size = q.size();
            for(int k = 0; k < q.size(); k++)
            {
                int i, j;
                i =q.front().first;
                j=q.front().second;
                q.pop();
                if(i<0 || i>N || j<0 || j>N)continue;
                if(i==t[0] && j==t[1])return level-1;
                q.push({i+2,j-1});
                q.push({i+2,j+1});
                q.push({i-2,j-1});
                q.push({i-2,j+1});
                q.push({i-1,j+2});
                q.push({i-1,j-2});
                q.push({i+1,j-2});
                q.push({i+1,j+2});
            }
            
            
        }
        return -1;
        
        
    }

    int main()
    {
        
        vector <int> k = {4,5};
        vector <int> t = {1,1};
        cout<<bfs(k,t,6);

    }