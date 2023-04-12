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
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
            int index=0;
            map <int, int> m;
            for (int i = n; i >= 1; i--)
            {
                m[arr[i-1]]++;
                if(m[arr[i-1]]==2)
                {
                    index=i;
                    break; 
                }

            }
            cout<<index<<endl;
            
            
        }
    }