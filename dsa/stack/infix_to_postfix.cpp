#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixtopostfix (string s)
{
    stack <char> st;
    string ans;

    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            ans += c;
            continue;
        }

        if(c == '(')
        {
            st.push(c);
            continue;
        }

        if(c == ')')
        {
            while(st.top() != '(')
            {
                ans+= st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty()
                   && prec(c) <= prec(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }

    }
        while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
 
    // Function call
    cout<<infixtopostfix(exp);
    return 0;
}