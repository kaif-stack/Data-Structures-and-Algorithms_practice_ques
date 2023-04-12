#include <bits/stdc++.h>
using namespace std;


bool isPossible(vector<int>& v)
{
    long long int last, l=0;
    long long int last2, l2=0;

    int size=v.size();

    bool firsts=false;
    bool seconds=false;
    long long int fend;

    for (int i = 0; i < size; i++)
    {
        if(l==0)
        {
            last=v[i];
        }
        else if(l==1)
        {
            if(v[i]==last+1)
            {
                last++;
                l++;
            }
            else if(v[i]>last+1)
            {
                last=v[i];
                l=0;
            }
        }
        else if(l==2)
        {
            if(v[i]==last+1)
            {
                last=INT_MAX;
                l=0;
                fend=i;
                firsts=true;
                break;
            }
            else if(v[i]>last+1)
            {
                last=v[i];
                l=0;
            }
        }
    }

    if(firsts)
    {
        for (int i = fend+1; i < size; i++)
        {
            if(l==0)
            {
                last=v[i];
            }
            else if(l==1)
            {
                if(v[i]==last+1)
                {
                    last++;
                    l++;
                }
                else if(v[i]>last+1)
                {
                    last=v[i];
                    l=0;
                }
            }
            else if(l==2)
            {
                if(v[i]==last+1)
                {
                    last=0;
                    l=0;
                    seconds=true;
                    break;
                }
                else if(v[i]>last+1)
                {
                    last=v[i];
                    l=0;
                }
            }
        }
    }

    if(seconds)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

int main()
{
    vector <int> v= {1,2,3,3,4,5};
    cout<<isPossible(v);

}