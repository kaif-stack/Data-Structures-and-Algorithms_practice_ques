using namespace std;
#include <bits/stdc++.h>


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int prev = image[sr][sc];
        int m = image.size();
        int n = image[0].size();
        queue <pair<int,int>> q;
        int r,c;

        q.push({sr,sc});
        while(q.size() != 0)
        {
            r = q.front().first;
            c = q.front().second;
            q.pop();
            image[r][c] = color;
            if((r-1) >= 0 && image[r-1][c] == prev) q.push({r-1, c});
            if((r+1) < m && image[r+1][c] == prev) q.push({r+1, c});
            if((c-1) >= 0 && image[r][c-1] == prev) q.push({r, c-1});
            if((c+1) < n && image[r][c+1] == prev) q.push({r, c+1});
        }
        return image;
    }

    int main(){
        vector <vector<int>> image;
        image.push_back({1,1,1});
        image.push_back({1,1,0});
        image.push_back({1,0,1});
        floodFill(image, 1, 1, 2);

    }