#include <bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
        long int size=prices.size();
        long long int lastmin=INT_MAX;
        int ans=0;
        for (int i = 0; i < size; i++)
        {
            if(prices[i]<lastmin)
            {
                lastmin=prices[i];
            }
            else
            {
                if(prices[i]-lastmin>=ans)
                {
                    ans=prices[i]-lastmin;
                }
            }
            
        }
        return ans;
    }

    int main()

    {
        vector <int> v={7,1,5,3,6,4};
        cout<<maxProfit(v);
    }