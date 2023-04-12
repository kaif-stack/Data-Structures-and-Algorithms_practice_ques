#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//https://codeforces.com/problemset/problem/208/A
int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s.substr(i,i+3)=="WUB")
        {
            i+=2;
        }
        else{
            break;
        }
    }
    vector<char> a;
    while(i<s.length())
    {

        if((s[i]=='W' && s[i+1]=='U'&& s[i+2]=='B'))
        {

            a.push_back(' ');
            i+=2;
        }

        else{
            a.push_back(s[i]);

        }
        i++;
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==' '&& a[i+1]==' ')
        {
            continue;
        }
        else{
            cout<<a[i];
        }
    }
}