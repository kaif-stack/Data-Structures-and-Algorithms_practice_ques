#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="aabba";
    // cin>>s;
    int length=s.length();
    int array[length][length];
    std::fill(*array, *array + length * length, 0);
    int maxstart=0;
    int maxend=0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if(i==j)
            {
                if(s[i]==s[j])
                {
                    array[i][j]=1;
                    maxstart=i;
                    maxend=j;

                }
            }
            
                if((s[i]==s[j]) &&  array[i+1][j-1]==1)
                {
                    array[i][j]=1;
                    maxstart=i;
                    maxend=j;
                    
                }
            
        }
        
        
    }
    cout<<s.substr(maxstart,maxend);
    
}