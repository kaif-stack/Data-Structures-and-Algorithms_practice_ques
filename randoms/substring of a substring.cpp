#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

        string s;
        cin>>s;
        int n=s.length();
        char a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=s[i];
        }
        int h=(n-1)/2;
        char b[h];
        int i=0;
        char token=strtok(a,"{},");
        while(token!=NULL)
        {
            b[i]=token;
            token=strtok(NULL,"{},");
            i++;
        }
        for(int j=0;j<h;j++)
        {
            cout<<b[i];
        }

}
