

#include <bits/stdc++.h>
using namespace std;

    bool isPowerOfThree(int n) {
        if(n<=0)
        {
            return false;
        }
        while(n>1)
        {
            if(n%3>0)
            {
                return false;
            }
            else
            {
                n=n/3;
            }
        }
        return true;
    }

    int main()
    {
        cout<<isPowerOfThree(27);
        cout<<isPowerOfThree(9);
        cout<<isPowerOfThree(0);
        cout<<isPowerOfThree(8);
    }