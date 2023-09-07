using namespace std;
#include <bits/stdc++.h>


 int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue <pair<int, int>> q;
        vector <vector<int>> vis(m, vector <int>(n,1));
        int level = 0;
        int numoffresh = 0;
        int numrotted = 0;
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({i,j});
                    vis[i][j] = 2;
                }
                if(grid[i][j] == 1)numoffresh++;
            }
        }
        if(numoffresh == 0)return 0;
        int drow[4] = {-1, 0, +1, 0};
        int dcol[4] = {0, +1, 0, -1};
        numrotted = -1*q.size();
        while(q.size()>0)
        {
            int size = q.size();
            level++;
            for(int i = 1; i <= size; i++)
            {
                int row = q.front().first;
                int column = q.front().second;
                grid[row][column] = 2;
                numrotted++;
                q.pop();
                for(int j = 0; j<3; j++)
                {
                    int rowf = row + drow[j];
                    int colf = column + dcol[j];
                    if((rowf < m) && (rowf>=0) && (colf>=0) && (colf<n) && vis[rowf][colf]==1 && (grid[rowf][colf]==1))
                    {
                        q.push({rowf, colf});
                        vis[rowf][colf] = 2;
                    }
                }
            }
        }
        if(numrotted < numoffresh)return -1;
        return level;
    }

    int main()
    {
        vector <vector<int>> grid = {{1,2}};
        cout<<orangesRotting(grid);
    }