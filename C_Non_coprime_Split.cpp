#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int l,r;
        cin>>l>>r;
        int a = -1,b = -1;
        for(int i=l;i<=r;i++)
        {
            for (int j = 2; j <= i/2; j++)
            {
                if(i%j == 0)
                {
                    a=i;
                    b=j;
                    i=r+1;
                    break;
                }
            }
        }
        if(a==-1 || b==-1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        int afterdevide = a/b;
        int p1 = afterdevide/2;
        int p2 = afterdevide-p1;
        cout<<p1*b<<" "<<p2*b<<endl;
    }
}