#include <bits/stdc++.h>
using namespace std;

    bool canConstruct(string r, string m) {
        int n=r.length();
        int n2=m.length();
        for (int i = 0; i < n; i++)
        {
            bool f=false;
            for (int j = 0; j < n2; j++)
            {
                if(r[i]==m[j])
                {
                    m[j]='0';
                    f=true;
                    break;

                }
            }
            if(!f)
            {
                return false;
            }
            
        }
        return true;
        
    }

    int main()
    {
        cout<<isPowerOfThree(27);
        // cout<<isPowerOfThree(9);
        // cout<<isPowerOfThree(0);
        // cout<<isPowerOfThree(8);
    }