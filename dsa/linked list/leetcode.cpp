#include <bits/stdc++.h>
using namespace std;

    bool isPowerOfFour(int n) {
        int y;
        while(n!=1)
        {
            y=n%4;
            if(y!=0)
            {
                return false;
            }
            n=n/4;
        }
    }

    int main()
    {
        cout<<isPowerOfFour(1024);
    }



