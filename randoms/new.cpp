#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        int n=4;
        vector <int> a;
        vector <int> b;
        vector <int> c;
        // cin>>n;                     
        int x;
        // for(int i=0; i<n; i++)
        // {
        //     cin>>x;
        //       a.push_back(x);
        // }
        a.push_back(3);
        a.push_back(1);
        a.push_back(5);
        a.push_back(3);

        while(a.size()>0)
        {   
            b.push_back(a[a.size()]);
            a.pop_back();
            if(b.size()%2==0)
            {
                b.insert(b.begin()+(b.size()/2),1,a.back());
                a.pop_back();
            }
            else
            {
                if((b[b.size()/2]+1)>=a.back())
                {
                    b.insert(b.begin()+((b.size()/2)+1),1,a.back());
                    a.pop_back();
                }
                else
                {
                    b.insert(b.begin()+((b.size()/2)+2),1,a.back());
                    a.pop_back();
                }
            }
            cout<<b[0]<<b[1]<<b[2]<<b[3];
            
        }
    } 

}

