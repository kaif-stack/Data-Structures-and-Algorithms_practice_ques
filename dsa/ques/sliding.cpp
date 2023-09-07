#include <bits/stdc++.h>
using namespace std;

bool compare(int a[],int b[])
    {
        for(int i = 0; i < 26; i++)
        {
            if(a[i] != b [i])return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int a[26] = {0};
        for(int i = 0; i < p.length(); i++)
        {
            a[p[i]-'a']++;
        }
        int b[26] = {0};
        for(int i = 0; i < p.length(); i++)
        {
            b[s[i]-'a']++;
        }
        vector <int> ans;
        if(compare(a,b))ans.push_back(0);
        int start = 1, end = p.length();
        while(end<s.length())
        {
            b[s[start-1]-'a']--;
            b[s[end]-'a']++;
            if(compare(a,b))ans.push_back(start);
            start++;
            end++;
        }
        return ans;
        
    }

    int main()
    {
        vector <int> v = findAnagrams("aaaaaaaaaa","aaaaaaaaaaaaa");
    }