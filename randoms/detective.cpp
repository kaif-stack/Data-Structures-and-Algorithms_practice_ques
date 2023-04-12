#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        string s="1?1??0?0";
        // cin>>s;
        int length=(s.length()+1);
        int lastone=0, firstzero=length;
        for(int i=0; i<=length; i++)
        {
            if(s[i]=='1')
            {
                lastone=i;
            }
        }
        for(int i=0; i<=length; i++)
        {
            if(s[i]=='0')
            {
                firstzero=i;
                break;
            }
        }
        int result=0;
        result=(firstzero-lastone);

        cout<<result<<endl;
    }
}
     