#include <bits/stdc++.h>
using namespace std;
pair<int,int> rec(int x,int y, int c, map <int,int> &m)
{
    pair<int,int> p={-1,-1};
    if(m.find(y)!=m.end())
    {   
        p.second=m[y];
        if(m[y]==c)
        {
            p.first=1;
            return p;
        }
    }
    if(p.second==-1)
    {   
        m[x/y]=rec(x/y,y,c,m).second;
        p.second=x%y + m[x/y];
    }
    return p;

    
}
int main()
{ 
    long long int x,c;
    cin>>x>>c;
    map <int,int> m;
    long long int y=0;
    pair<int,int> s;
    for (int i = 2; i < x; i++)
    {
        if(1==rec(x,i,c,m).first)
        {
            cout<<i;
            break;
        }
    }

}