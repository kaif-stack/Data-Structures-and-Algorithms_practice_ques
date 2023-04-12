#include <bits/stdc++.h>
using namespace std;

    int lengthOfLongestSubstring(string s) {
        int length=s.length();
       set <char>set;
        int l=0;
        int start=0;
        int prev=0;
        int max=0;
        for (int i = 0; i < length; i++)
        {
            if(set.find(s[i])==set.end())
            {
               set.insert(s[i]);
                l++;
                if(l>max)
                {
                    max=l;
                }
            }
            // else(setset.find(s[i])!=setset.end() && s[i]!=-1)
            else
            {
                for (int j = start; j < i; j++)
                {
                    
                    if(s[j]==s[i])
                    {
                        start=j+1;
                        break;
                    }
                    else
                    {
                       set.erase(s[j]);
                       prev++;
                        l--;
                    }
                }
                
                
            }

            
        }
        return max;
        

    }

    int main()

    {
        cout<<lengthOfLongestSubstring("abcabccb");
        cout<<lengthOfLongestSubstring("bbbbb");
        cout<<lengthOfLongestSubstring("pwwkew");
    }