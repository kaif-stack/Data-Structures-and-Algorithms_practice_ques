#include <bits/stdc++.h>
using namespace std;

    int concatenatedBinary(int n) {
        int ans=10e+7;
        ans=0;
        int power = 1;
        int shift = 1;
        int power2 = 1;
        int count = 1;
        while(count<(n+1))
        {
            if(power==0)
            {
                power2*=2;
                power = power2;
                shift++;
            }
            while(power>0)
            {
                ans<<=shift;
                ans=ans^count;
                power--;
                count++;
            
            }
        }
        
        return ans;
    }

    int main()
    {
        cout<<concatenatedBinary(5);
    }