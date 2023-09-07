using namespace std;
#include <bits/stdc++.h>


void eraseIslands(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        eraseIslands(grid, i - 1, j);
        eraseIslands(grid, i + 1, j);
        eraseIslands(grid, i, j - 1);
        eraseIslands(grid, i, j + 1);
    }


    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1')
                {
                    eraseIslands(grid, m, n);
                    count++;
                }
            }
        }
        return count;
    }

int main()
{
    vector <vector<char>> grid;
    grid.push_back({"1","1","1","1","0"});
    grid.push_back({"1","1","0","1","0"});
    grid.push_back({"1","1","0","0","0"});
    grid.push_back({"0","0","0","0","0"});
    numIslands(grid, 4,5);

}