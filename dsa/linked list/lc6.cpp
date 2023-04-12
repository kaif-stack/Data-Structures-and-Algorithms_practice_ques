#include <bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        
        int minl=INT_MAX;
        int arrl=strs.size();
        for (int i = 0; i < strs.size(); i++)
        {
            if(strs[i].length()<minl)
            {
                minl=strs[i].length();
            }
        }
        string s;
        if(arrl==1)
        {
            return strs[0];
        }
        if(minl==0)
        {
            return s;
        }
        int length=0;
        int x=0;
        
        for (int i = 0; i <= minl; i++)
        {
            char c=strs[0][i];
            for (int j = 0; j < arrl; j++)
            {
                if(strs[j][i]!=c)
                {
                    x++;
                    break;
                }
            }
            length=i;
            if(x==1)
            {
                break;
            }

            
        }
        s = strs[0].substr(0, length);
        return s;
        
    }

    int main()
    {
        vector<string> strs{"c", "c"};
        cout<<longestCommonPrefix(strs);
    }