#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        bool check=false;
        int length = a.size();
        for(int i = 0; i < length-1; i++)
        {
            if(a[i] == '0' && b[i] == '0' && a[i+1] == '1' && b[i+1] == '1')
            {
                bool = true;
                break;
                
            }
        }
        if(bool)cout<<"YES";
        else cout<<"NO";
    }
}