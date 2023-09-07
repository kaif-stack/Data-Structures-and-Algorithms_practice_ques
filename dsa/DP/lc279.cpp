using namespace std;
#include <bits/stdc++.h>

vector <int> v(10001    ,-1);
    int rec(long long i, long long target)
    {
        if(v[i] != -1)return v[i];
        if(target == 0)v[i] = return 0;
        if(target < (i*i))v[i] = return 10001;
        long long a = rec(i+1, target);
        long long b = 1e9;
        if((i*i) <= target)
        {
            b = 1 + rec(i, target - (i * i));
        }
        return v[i] = (min(a,b));
    }

    int numSquares(int n) {
        return rec(1, n);
    }
    int main()
    {
        cout<<numSquares(12);
    }