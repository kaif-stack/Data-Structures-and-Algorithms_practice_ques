#include <bits/stdc++.h>
using namespace std;

bool com(int index, int size,string s,string d )
{
    for(int i = 0; i < size; i++)
    {
        if(s[index+i] != d[i])return false;
    }
    return true;
}

int rec(string s, vector<string>& d, int index)
    {
        if(index >= s.size())return 0;
        int min=INT_MAX;
        int p = -1;
        for(int i=0; i<d.size(); i++)
        {
            int size = d[i].size();
            
            if(index+size<=s.size())
            {
                if(com(index,size,s, d[i]))
                {
                    int l = rec(s,d,index+size);
                    if(l<min){
                    min=l;
                    p=i;
                }
                }
                
            }   
        }
        int n2 = 1+rec(s,d, index+1);
        if(n2<min)return n2;
        if(n2>=min)return min;
        return 0;
        
        
        
    }
    
    int minExtraChar(string s, vector<string>& d) {
        return rec(s, d, 0);
    }

    int main()
    {
        vector<string> d= {"hello","world"};
        cout<<minExtraChar("sayhelloworld", d);
    }