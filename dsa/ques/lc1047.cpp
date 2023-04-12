#include <bits/stdc++.h>
using namespace std;


    // string removeDuplicates(string s) {
    //     int size = s.length();

    //     for(int i = 1; i < size; i++)
    //     {
    //         if(i>s.length())break;
    //         while(s[i] == s[i-1])
    //         {
    //             s.erase(i-1, 2);
    //             i-=1;
    //         }
    //     }
    //     return s;
    // }

        string removeDuplicates(string s) {
        int size = s.length();

        stack <char> st;
        for (int i = 0; i < size; i++)
        {
            if(st.size()>0 && s[i] == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        vector <char> v;
        while(st.size()>0)
        {
            v.push_back(st.top());
            st.pop();
        }        
        string ans;
        for (int i = v.size()-1; i >=0; i--)
        {
            ans+=v[i];
        }
        return ans;
    }

    int main()
    {
        string a = "abbaca";
        cout<<removeDuplicates(a);
        cout<<"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    }