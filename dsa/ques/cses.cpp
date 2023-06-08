#include <bits/stdc++.h>
using namespace std;

    bool backspaceCompare(string s, string t) {
        stack <char> s1;
        stack <char> s2;
        int ssize = s.size();
        int tsize = t.size();
        for(int i=0; i < ssize; i++)
        {
            if(s[i] == '#')
            {
                if(s1.size()>0)
                {
                    s1.pop();
                }
            }
            else 
            {
                s1.push(s[i]);
            }
        }
        for(int i=0; i < tsize; i++)
        {
            if(t[i] =='#')
            {
                if(s2.size()>0)
                {
                    s2.pop();
                }
            }
            else 
            {
                s2.push(t[i]);
            }
        }

        if(s1.size() != s2.size())return false;

        while(s1.size()>0 && s1.top()==s2.top())
        {
            s1.pop();
            s2.pop();
        }
        if(s1.size()==0)
        {
            return true;
        }

        return false;
    }

int main()
{
    cout<<backspaceCompare("ad#c","ab#c");  
    cout<<"qwe";
}