    #include <bits/stdc++.h>
using namespace std;
    
    string reverseWords(string s) {
        stack <string> st;
        int slen = s.length();
        string temp;
        for(int i = 0; i < slen; i++)
        {
            if(s[i] == ' ')
            {
                st.push(temp);
                temp = "";
            }
            else
            {
                temp = temp + s[i];
            }
        }
        st.push(temp);
        string ans;
        while(st.size()>1)
        {
            ans = ans + st.top() + " ";
        }
        ans = ans + st.top();
        return ans;
    }

    int main()
{
    string s = "the sky is blue";
    cout<<reverseWords(s);
}