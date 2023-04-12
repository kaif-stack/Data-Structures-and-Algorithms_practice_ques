#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
        int nl=needle.length(), hl = haystack.length();
        if(nl>hl)return -1;
        long nhash = 0, hhash = 0;
       for(int i = 0; i < nl;i++)
       {
           nhash=nhash*10+(needle[i]-'a')+1;
           hhash=hhash*10+(haystack[i]-'a')+1;
       }
       for(int i = nl; i < hl;i++)
       {
           if(hhash==nhash)return i-nl;
           hhash-=(haystack[i-nl]-'a'+1)*pow(10,nl-1);
           hhash*=10;
           hhash+=haystack[i]-'a'+1;
       }
       if(hhash==nhash)return hl-1-nl;
       return -1;

    }

    int main() 
    {
        string s = "abc";
        cout<<strStr(s, "c");
    }