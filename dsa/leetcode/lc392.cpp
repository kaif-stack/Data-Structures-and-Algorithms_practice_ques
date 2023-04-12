#include <bits/stdc++.h>
using namespace std;\

    bool isSubsequence(string s, string t) {
        int sizes=s.size();
        if(sizes==0)
        {
            return true;
        }
        int prev=0;
        bool flag =false;
        int sizet=t.size();
        int i=0;
        for (i = 0; i < sizes; i++)
        {
            char c=s[i];
            flag=false;
            while(!flag && prev<sizet)
            {
                if(i==sizes-1 && t[prev]==s[i])
                {
                    return true;
                }
                if(t[prev]==s[i])
                {
                    flag=true;
                }
                prev++;
                
                
            }
        }
        if(i=sizes-1 && flag)
        {
            return true;
        }
        return false;
        
    }

    int main()
    {
        cout<<isSubsequence("abc", "ahbgdc");
    }