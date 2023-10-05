#include <bits/stdc++.h>
using namespace std;


string decodeAtIndex(string s, int k) {
        long long int length = 0;
        for(auto x:s){
            if(x>=97){length++;}
            else{
                int temp = x;
                length*=(x-48);
            }
        }
        string ans = "a";
        for(int i = s.length()-1; i>=0; i--){
            if(length == k)
            {
                ans[0] = s[i];
                return ans;
            }
            if(s[i]>=97)
            {
                length--;
            }
            else
            {
                length/=(s[i] - 48);
                if(length<k)
                {
                    k%=(s[i] - 48);
                }
            }
        }
        return ans;
    }

    int main ()
    {
        cout<<decodeAtIndex("ha22", 5);
    }