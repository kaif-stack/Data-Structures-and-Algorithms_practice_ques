#include <bits/stdc++.h>
using namespace std;

    bool isValid(string s) {
        stack<char> mst;
        for(int i=0;i<s.length();i++){
            if(mst.empty()){
                mst.push(s[i]);
                
            }
            else if ((mst.top() == '(' && s[i] == ')')
                 || (mst.top() == '{' && s[i] == '}')
                 || (mst.top() == '[' && s[i] == ']')){
                mst.pop();
            }
            else{
                mst.push(s[i]);
                int ahfsf=0;
            }
            
        }
        if(mst.empty()){
            int s=0;
            return true;
            
        }
        else{
            return false;
        }
    }
























