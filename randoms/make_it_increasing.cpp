#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        int array[n];
        for( int i=0; i<n; i++)
        {
            cin>>array[i];
        }
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else{
        int count=0;
        for( int j=(n-1); j>0; j-- )
        {
            while(array[j-1]>=array[j] && array[j]>0)
            {
                    array[j-1]/=2;
                    count+=1;
            }
            if(array[j-1]==array[j])
            {
                count=-1;
                break;
            }
        }
        if(is_sorted(array, array+n))
        {
            cout<<count<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
}
}