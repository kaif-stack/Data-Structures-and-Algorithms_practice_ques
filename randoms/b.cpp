#include <bits/stdc++.h>
using namespace std;


int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string search;
        cin>>search;
        int n=0;
        for(int i=0; i<((search.length())-1); i++)
        {
            char start=search[i];
            char end=search[i+1];
            int index_start=-1, index_end=-1;
            for(int j=0; j<((s.length())); j++)
            {  
                if(start==s[j])
                {
                    index_start=j;
                }
                if(end==s[j])
                {
                    index_end=j;
                }
                if(index_start!=-1 && index_end!=-1)
                {
                    n=n+(abs(index_start-index_end));
                    break;
                }
            }
        }
        cout<<n<<endl;
    }
}