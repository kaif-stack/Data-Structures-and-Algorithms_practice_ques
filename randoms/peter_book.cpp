#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int a=0;
    int array[7];
    cin>>array[0]>>array[1]>>array[2]>>array[3]>>array[4]>>array[5]>>array[6];
    while(x>0)
    {
    for(int i=0; i<7; i++)
    {
        x=x-array[i];
        if(x<1)
        {
            a=i;
            break;
        }
    }
    
    }
    cout<<a+1<<endl;
}
