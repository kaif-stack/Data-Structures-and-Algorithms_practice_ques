
using namespace std;
#include <bits/stdc++.h>

    void rec(int start,string &s, string &temp, vector <string> &ans)
    {
        if(start >= s.length())
        {
            ans.push_back(temp);
            return;
        }
        int num = (s[start]-48);
        if(num != 0)
        {
            char ch = num + 64;
            temp.push_back(ch);
            rec(start+1, s,temp,ans);
            temp.pop_back();
            if(start == (s.length()-1))return;
            int num2 = (s[start+1]-48);
            num = (num*10)+ num2;
            if(num <= 26)
            {
                ch = num + 65;
                temp.push_back(ch);
                rec(start+2, s,temp,ans);
                temp.pop_back();
            }
        }    
    }

    int main() {
        string s = "11111111111111111111111111111";
        vector <string> ans;
        string temp;
        rec(0,s,temp, ans);
        for(auto x:ans)
        {
            cout<<x<<endl;
        }
        
    }