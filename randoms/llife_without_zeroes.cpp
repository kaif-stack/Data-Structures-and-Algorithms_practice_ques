#include <bits/stdc++.h>
using namespace std;

void nozero(int a , vector <int> vector)
{
    int r, n=-1; 
    while(n<0)
    {
        if(a%10!=0)
        {
            vector.push_back(a%10);
            
        }
        a=a/10;
        if(a<10)
        {
            n=0;
        }
    }
}

long number(vector <int> vector)
{
    long b;
    int x=0;
    for(int i=0; i<vector.size(); i--)
    {
        x=x+((vector[i])*10);
    }
    return x;
}

int main()
{
    int a=109, b=202;
    // cin>>a>>b;
    int sum=a+b;
    vector <int> va, vb, vsum;
    nozero(a, va);
    nozero(b, vb);
    nozero(sum, vsum);
    if((number(va)+number(vb)) == number(vsum))
    {
        cout<<"YES"<<endl;
    }

    else{cout<<"NO"<<endl;}





    

}