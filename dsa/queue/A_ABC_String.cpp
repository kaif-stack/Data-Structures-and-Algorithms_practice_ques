#include <bits/stdc++.h>
using namespace std;

bool stringcheck( string s, int a, int b, int c)
{   int check=0;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]=='A')
        {
            check+=a;
        }
         if(s[i]=='B')
        {
            check+=b;
        }
         if(s[i]=='C')
        {
            check+=c;
        }
        if(check<0)
        {
            return false;
        }
    }
    if(check==0)
    {return true;}
    else 
    {
        return false;
    }
}

int main ()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     string s;
    //     cin>>s;
    //     int a=0,b=0,c=0;
    //     if(s[0]=='A'){a=1;}
    //     if(s[0]=='B'){b=1;}
    //     if(s[0]=='C'){c=1;}
    //     int size=s.size();
    //     bool check1 ,check2;
    //     if(s[size-1]=='A' && a==0){a=-1;}
    //     else if(s[size-1]=='B' && b==0){b=-1;}
    //     else if(s[size-1]=='C' && c==0){c=-1;}
    //     else{cout<<"NO"<<endl;continue;}
    //     char var;
    //     if(a==0)
    //     {
    //         check1 = stringcheck(s,1,b,c);
    //         check2 = stringcheck(s,-1,b,c);

    //     }
    //     else if(b==0)
    //     {
    //         check1 = stringcheck(s,a,1,c);
    //         check2 = stringcheck(s,a,-1,c);
    //     }
    //     else if(c==0)
    //     {
    //         check1 = stringcheck(s,a,b,1);
    //         check2 = stringcheck(s,a,b,-1);
    //     }
    //     if(check1 || check2)
    //     {
    //         cout<<"YES"<<endl;
    //     }
    //     else{cout<<"NO"<<endl;}

        

    // }
    int n=0;
    int sum=1;
    int size=5;
    int j=1;
    n+=(1%10)*pow(10,4);
    cout<<(1%10)*pow(10,4);
}