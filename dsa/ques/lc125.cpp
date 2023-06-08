#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        int start = 0;
        int last = s.length()-1;
        for(int i=0; s.length()>i ;i++)
        {
            if(!((s[i]>=65 && s[i]<=90) ||( s[i]>=97 && s[i]<=123)))
            {

                s.erase(i,1);
            }
        }
        cout<<s;
        last = s.length()-1;
        while(start<last)
        {
            if(s[start]!=s[last])return false;
            start++;
            last--;
        }
        return true;
    }

int main() {

    cout<<isPalindrome("race a car");

    return 0;
}