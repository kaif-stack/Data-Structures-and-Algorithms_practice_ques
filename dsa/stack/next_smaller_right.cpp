#include <bits/stdc++.h>
using namespace std;

int main ()         //right wala
{
    vector <int> v={1,3,2,4};
    stack <int> s;
    vector <int> v2;

    int s1=v.size(), s2=v2.size();

    for (int i = 0; i < s1; i++)
    {
        if(s.size()!=0 && s.top()<v[i])
        {
            v2.push_back(s.top());
        }
        else
        {
            while(s.size()!=0 && s.top()>v[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v2.push_back(-1);
            }
            else{
                v2.push_back(s.top());
            }
        }
        s.push(v[i]);
    }
    for (int i = 0; i < s1; i++)
    {
        cout<<v2[i]<<" ";
    }
    
}