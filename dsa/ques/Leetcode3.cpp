#include <bits/stdc++.h>
using namespace std;

    int lengthOfLongestSubstring(string s) {
        int length=s.length();
        map <int, int> map;
        int l=0;
        int start=0;
        for (int i = 0; i < length; i++)
        {
            if(map.find(s[i])==map.end())
            {
                map[s[i]]=i;
                l++;
            }
            // else(map.find(s[i])!=map.end() && s[i]!=-1)
            else
            {
                int prev=map[s[i]];
                for (int j = start; j < i; j++)
                {
                    if(s[j]==s[i])
                    {
                        l--;
                        start=j;
                        break;
                    }
                    else
                    {
                        map.eraze[s[j]];
                        l--;
                    }
                }
                
                
            }

            
        }
        return l;
        

    }

    int main()

    {
        cout<<lengthOfLongestSubstring("abcabccb");
        cout<<lengthOfLongestSubstring("bbbbb");
        cout<<lengthOfLongestSubstring("pwwkew");
    }