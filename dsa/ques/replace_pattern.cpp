#include <bits/stdc++.h>
using namespace std;

class Solution {
public:



vector<string> findAndReplacePattern(vector<string>& words, string pattern)
{

    check(pattern, true);
    vector <string> ans;
    for (int i = 0; i < words.size(); i++)
    {
        if(check(words[i], false))
        {
            ans.push_back(words[i]);
        }
    }
    return ans;
}

vector <int> numpattern;      //122
bool check(string s, bool flag)
{
    map <char, int> m;
    int count = 0;
    vector <int> compare;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if(m[s[i]]>0)compare.push_back(m[s[i]]);
        else
        {
            count++;
            m[s[i]] = count;
            compare.push_back(count);
        }
    }
    if(flag)
    {
        numpattern = compare;
        return true;
    }
    for (int i = 0; i < size; i++)
    {
        if(numpattern[i] != compare[i])return false;
    }
    return true;
}
};


int main()
{
    Solution ob;
    string s = "abb";
    vector <string> a = {"abc","deq","mee","aqq","dkd","ccc"};
    vector <string> ans = ob.findAndReplacePattern(a,s); 
    cout<<"1";
}