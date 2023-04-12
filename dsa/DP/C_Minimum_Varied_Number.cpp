#include <bits/stdc++.h>
using namespace std;

    int main()
    {
        int t;
        cin>>t;
        
        while(t--)
        {
            long long int n;
            cin>>n;
            int arr[9]={0};

            int x=n;
            int max=9;
            int index=0,length=1;
            if(n==45)
            {
                cout<<"123456789"<<endl;
                continue;
            }
            while(x>0)
            {
                for (int i = 0; i < 9, x>0;)
                {
                    arr[i]++;
                    x--;
                    if(arr[i]==max && max>0)
                    {
                        i++;
                        length++;
                        max--;
                    }
                }
                
            }
            for (int i = length-1; i >=0; i--)
            {
                if(arr[i]>0)
                {
                    cout<<arr[i];
                }
            }
            cout<<endl;
            

        }
    }