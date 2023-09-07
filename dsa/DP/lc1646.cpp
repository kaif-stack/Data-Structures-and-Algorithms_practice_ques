using namespace std;
#include <bits/stdc++.h>


    int getMaximumGenerated(int n) {
        vector <int> dp(n+1, 0);
        dp[0] = 0;
        dp[1] = 1;
        if(n<2)return dp[n];
        int maximum = 1;
        for(int i = 2; i <= n; i++)
        {
            if(i%2)
            {
                dp[i] = dp[(i-1)/2] + dp[((i-1)/2)+1];
            }
            else
            {
                dp[i] = dp[i/2];
            }
            maximum = max(maximum, dp[i]);
        }
        return maximum;
    }


    int main()
    {
        cout<<getMaximumGenerated(0)<<endl;
    }