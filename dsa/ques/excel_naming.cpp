#include <bits/stdc++.h>
using namespace std;

    string convertToTitle(int columnNumber) {
        string s;
        while(columnNumber > 0)
        {
            char c; 

            int x = (columnNumber%26);
            c = x+64;
            s = s + c; 
            columnNumber = columnNumber/26;
            
        }
        return s;
    }

    int main()
    {
        cout<<convertToTitle(4485);
    }