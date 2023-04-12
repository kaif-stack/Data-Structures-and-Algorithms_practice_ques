#include <bits/stdc++.h>
using namespace std;
int countDistinctWays(int n);
int main()
{
    cout<<countDistinctWays(2);
}
int countDistinctWays(int n) {
    if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }
        long long int x=0;
        x=countDistinctWays(n-1)+countDistinctWays(n-2);
        long long mod = 1000000007;
        return x%(mod);
     
}