#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> v;

    int rec(vector<string>& strs, int m, int n, int x)
    {
        if(x==strs.size()-1)return 0;
        return max(1+rec(strs,m-v[x].first,n-v[x].second,x+1),rec(strs,m,n,x+1));
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        int size = strs.size();
        for(int i = 0; i < size; i++)
        {
            int a=0,b=0;
            for(int j = 0; j < strs[i].size(); j++)
            {
                if(strs[i][j] == '0')
                {a++;}else{b++;}
            }
            v.push_back(make_pair(a,b));
        }
        return rec(strs,m,n,0);
    }

    int main()
    {
        vector <string> strs = {"10","0001","111001","1","0"};
        int m=5,n=3;
        cout<<findMaxForm(strs,m,n);
    }