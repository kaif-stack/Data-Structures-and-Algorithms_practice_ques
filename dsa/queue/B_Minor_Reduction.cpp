#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        string s="10057";
        // cin>>s;
        int size=s.size();
        int arr[size-1];
        int sum=0;      
        for (int i = 0; i < size; i++)
        {   
            long long int n=0;
            for (int j = 0; j < size; j++)
            {
                if(i==j)
                {
                   sum = (s[j]- '0') + (s[j+1]- '0');
                   j++;
                   if(sum>9)
                   {
                    n=n+((sum/10)*(10^(size-j))) + ((sum%10)*(10^(size-j+1)));
                   }
                   else
                   {
                       n=n+((sum%10)*(10^(size-j)));
                   }
                }
                else
                {
                    n+=((s[j]-'0')*(10^(size-j)));
                }
            }
            arr[i]=n;
            
        }
        sort(arr, arr+(size-1));
        cout<<arr[size-2]<<endl;


        
        
    }
}