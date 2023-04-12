#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        string compare="aaa"; 
        string input="aaaa";
        // cin>>compare>>input;
        int x=0, n=0;
        int j=0;
        int s=-1;
        int full=0;
        if(compare.length()>input.length())
        {
            cout<<"IMPOSSIBLE"<<endl;
            s++;
            break;
        }
        for(int i=0; i<input.length(); i++)
        {   if(compare[i]==input[j])
        {
            j++;
            full++;
        }
            if(compare[i]!=input[j])
            {
                j++;
                i--;
                n++;
            }
            if(compare[i]!=input[j] && j==input.length() && full!=compare.length())
            {
                cout<<"IMPOSSIBLE"<<endl;
                s++;
                break;
            }
        }
        if(s=-1)
        {
        cout<<n<<endl;
        }
    }
}