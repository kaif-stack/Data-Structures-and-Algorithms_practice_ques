#include <bits/stdc++.h>
using namespace std;

vector <int> kk(vector <int> v)
{
    stack <int> s;
    vector <int> v2;

    int s1=v.size(), s2=v2.size();


    

    for (int i = 0; i < s1; i++)
    {
        if(s.size()==0)
        {
            for (int i = s1-1; i >=0; i--)
            {
                s.push(v[i]);
            }
        }
        if(s.size()!=0 && s.top()>v[i])
        {
            v2.push_back(s.top());
        }
        else
        {
            while(s.size()!=0 && s.top()<v[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v2.push_back(-1);
            }
            else v2.push_back(s.top());
        }
        s.push(v[i]);

    }
    return v2;
}

int main ()
{
    vector <int> v={1,3,2,4};
    vector <int> v2;
    v2= kk(v);
    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
}