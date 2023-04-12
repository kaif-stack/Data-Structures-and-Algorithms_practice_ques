#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int t=1; 
    // cin>>t;
    while(t--)
    {
        int chairs=2, people=3;
        // cin>>people>>chairs;
        int s=0;
        if(people>chairs)
        {
            s=-1;   
        }
        int array[people]={1, 1, 1};

        // for(int i=0; i<people; i++)
        // {
        //     cin>>array[i];
        // }
        int total=0;
        while(s==0)
        {
            for(int j=0; j<people; j++)
            {   
                if ( array[j-1] > array[j] && (s!=-1))
                {
                    total+=(array[j-1]+1);
                }
                else{
                total+=(array[j]+1);
                if(total>chairs)
                {   
                    s=-1;
                    break;
                }
                }
                
            }
            int last=0;
            last=( (chairs-array[people-1]) + array[0] );
            if(last<array[people-1])
            {
                s=-1;
            }



        }
        if(s==-1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}