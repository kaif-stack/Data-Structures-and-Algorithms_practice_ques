
#include <bits/stdc++.h>
using namespace std;


    bool check(string &s, int start, int end)
    {
        while(start<=end)
        {
            if(s[start] != s[end])return false;
            start++;
            end--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int size = s.size();
        if(check(s, 0, size-1))
        {
            return true;
        }

        for( int i = 0; i <=(size-1)/2; i++ )
        {
            if(s[i] != s[size-1-i])
            {
                if(check(s,i+1, size-1-i) || check(s,i, size-i))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        return false;
    }