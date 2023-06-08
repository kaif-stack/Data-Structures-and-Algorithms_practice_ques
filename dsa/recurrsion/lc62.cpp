#include <bits/stdc++.h>
using namespace std;


int rec(int m, int n,int a, int b, vector<vector<int>> &v)
    {
s        if(v[m][n]!=-1)return v[m][n];

        if(m==a || n==b)return 1;

        v[m][n] = rec(m+1,n,a,n, v)+rec(m, n+1,a,b,v);
        return v[m][n];
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m, vector<int>(n, -1));
        return rec(0,0,m-1,n-1, v);
    }


    int main()
    {
        cout<<uniquePaths(3,7)<<endl;
    }