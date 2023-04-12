#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    vector <int> vec;
    if(n%2==0)
    {
        for(int i=0; i<n; i+=2)
        {
            vec.push_back(i+1);
        }
        for(int i=2; i<=n; i+=2)
        {
            vec.push_back(i);
        }
    }
    else
    {
        for(int i=0; i<n; i+=2)
        {
            vec.push_back(i+1);
        }
        for(int i=2; i<=n; i+=2)
        {
            vec.push_back(i);
        }
    }
    
    cout<<vec[k-1]<<endl;
    
}
