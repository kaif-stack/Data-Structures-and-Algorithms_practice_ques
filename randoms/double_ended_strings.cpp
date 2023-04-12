#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int n=0;
        if(s1.length()>=s2.length())
        {
            for(int i=0; i<s1.length(); i++)
            {
                for(int j=i; j<s1.length(); j++)
                {
                    for(int k=0; k<s2.length(); k++)
                    {
                        int s=(k+(j-i));
                        if((s1.compare(i, j, s2, k, 5)) == 0)
                        {
                            cout<<s<<endl;
                            n=1;
                            break;
                        }
                    }
                    if(n==1)
                        {break;}
                }
                if(n==1)
                        {break;}
            }

        }
    }
}