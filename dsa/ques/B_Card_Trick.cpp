#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n, m;
    cin>>n;
    int a1[n]; 
    for(int i=0; i<n; i++)
    {
      cin>>a1[i];
    }

    cin>>m;
    int a2[m];
    for(int i=0; i<m; i++)
    {
      cin>>a2[i];
    }
    if(n<2)
    {
        cout<<a1[0];
    }
    else{
        int sum=0;
        for(int i=0; i<m; i++)
        {
        sum+=a2[i];
        }
        cout<<a1[sum%n]<<endl;
    }
  }
}