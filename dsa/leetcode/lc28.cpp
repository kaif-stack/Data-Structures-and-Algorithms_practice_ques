#include <bits/stdc++.h>
using namespace std;

    int strStr(string haystack, string needle) {
        
        int hlen = haystack.length();
        int nlen = needle.length();

        for (int i = 0; i < hlen; i++)
        {
            if (haystack[i] == needle[0])
            {
                for (int j = 0; j < nlen; j++)
                {
                    if(i+j<hlen)
                    {
                    if (haystack[i+j] != needle[j])
                    {
                        break;
                    }
                    if(j == nlen-1 && haystack[i+j] == needle[j])
                    {
                        return i;
                    }                        
                    }
                }
            }
        }
        return -1;


    }

    int main() 
    {
        cout<<strStr("mississippi", "issip");
    }