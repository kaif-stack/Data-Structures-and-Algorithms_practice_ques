#include <bits/stdc++.h>
using namespace std;

    bool isIsomorphic(string t, string s) {
        int size=s.size();
        map <char, char> m;
        map <char,char> ma;
        bool b1=true, b2=true;
        for (int i = 0; i < size; i++)
        {
            if(m.find(t[i])==m.end())
            {
                m[t[i]]=s[i];
            }
            else if (m.find(t[i])!=m.end())
            {
                if(m[t[i]]!=s[i])
                {
                    b1= false;
                    break;
                }
            }
        }
        int s2=t.size();
        for (int i = 0; i < s2; i++)
        {
            if(ma.find(s[i])==ma.end())
            {
                ma[s[i]]=t[i];
            }
            else if (ma.find(s[i])!=ma.end())
            {
                if(ma[s[i]]!=t[i])
                {
                    b2= false;
                    break;
                }
            }
        }
        if(b1 && b2)
        {
            return true;
        }
        return false;
        
    }

    int main()
    {
        cout<<isIsomorphic("paper","title");
    }