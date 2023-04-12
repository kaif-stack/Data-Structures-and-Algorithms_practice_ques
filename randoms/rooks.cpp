#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    long int n,q;
    cin>>n>>q;
    long int arx[n]={0}, ary[n]={0};
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int x,y;
            cin>>x>>y;
            arx[x-1]+=1;
            ary[y-1]+=1;
        }
        else if(t==2)
        {
            int x,y;
            cin>>x>>y;
            arx[x-1]-=1;
            ary[y-1]-=1;
        }
        else if(t==3)
        {
            int x1, y1, x2, y2;
            cin>>x1>>y1>>x2>>y2;
            int check=0;
            for(int i= (min(x1,x2))-1; i<max(x1,x2); i++ )
            {
                if(arx[i]>0)
                {
                    check=1;
                    cout<<"YES"<<endl;
                    break;
                }
                
            }
            if(check==0)
            {
               for(int i= (min(y1,y2))-1; i<max(y1,y2); i++ )
            {
                if(ary[i]>0)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                
            } 
            }
        }
    }
}