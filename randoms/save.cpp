#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
// https://codeforces.com/problemset/problem/208/A
int main()
{
    string s="WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";
    //cin>>s;
    int i;
    char c;
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
    while(i<s.length())
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'&& c==' ')
        {
            break;
        }
        else if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'&& c==' ')
        {
            cout<<" ";
            c=' ';
            i+=2;
        }

        else{
            cout<<s[i];
            c=s[i];
        }
        i++;
    }
}

