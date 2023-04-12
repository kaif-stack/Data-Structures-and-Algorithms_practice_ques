#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int array[n][n]={0};
        int number=1;
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        if(n==2)
        {
            cout<<"-1"<<endl;
        }
        else{
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; i+=2)
            {
                array[i][j]=number;
                number++;
            }
            
        }
        for (int k = 0; k < n; k++)
        {
            for (int l = 1; l < n; l+=2)
            {
                array[k][l]=number;
                number++;
            }
            
        }
        for (int m = 0; m < n; m++)
        {
            for (int o = 0; o < n; o++)
            {
                cout<<array[m][o]<<" ";
            }
            cout<<endl;
            
        }
        
    }
}
}