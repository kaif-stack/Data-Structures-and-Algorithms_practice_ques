#include <bits/stdc++.h>
using namespace std;

    string makeGood(string s) {
        int len = s.length();
        for (int i = len-2; i >= 0; i--)
        {
            if((s[i]+32==s[i+1]) || (s[i+1]+32==s[i]))
            {
                s.erase(i, 2);
            }
        }
        return s;
    }

    int main()
    {
        string s = "leEeetcode";
        cout<<makeGood(s);
        cout<<"";
    }