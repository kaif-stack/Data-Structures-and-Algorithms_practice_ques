#include <bits/stdc++.h>
using namespace std;

void kk(vector <int> v)
{
    stack <int> s;
    vector <int> v2;
    stack <int> index;

    int s1=v.size(), s2=v2.size();

    for (int i = 0; i < s1; i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        if(s.size()!=0 && s.top()>v[i])
        {
            v2.push_back(i-index.top());
        }
        else
        {
            while(s.size()!=0 && s.top()<v[i])
            {
                s.pop();
                index.pop();
            }
            if(s.size()==0)
            {
                v2.push_back(s1-i);
            }
            else v2.push_back(i-index.top());
        }
        s.push(v[i]);
        index.push(i);

    }
cout<<"h";

}

int main()
{
    vector <int> v={100,80,60,70,60,75,85};
    kk(v);
}