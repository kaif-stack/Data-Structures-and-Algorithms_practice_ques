#include <bits/stdc++.h>
using namespace std;
int islucky(int n)
{
    int r; 
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r==4||r==7)
        {
            continue; 
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    int x= islucky(n);
    if(x==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        for(int i=4; i<n; i++)
        {
            if(islucky(i)==1)
            {
                if(n%i==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
    }
    
}