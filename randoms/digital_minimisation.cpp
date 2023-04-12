#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length()==2)
        {
            cout<<s[1]<<endl;
        }
        else if(s.length()>2)
        {
            int comp=100;
            int index=0;
            for (int i = 0; i < s.length(); i++)
            {
                int ascii=s[i];
                if(ascii<comp)
                {
                    comp=ascii;
                    index=i;
                }
                
            }
            cout<<s[index]<<endl;
            
        }
    }
}