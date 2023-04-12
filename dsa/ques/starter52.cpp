#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int a[n];
	    for (int i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        int min=a[0];
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
            {
                if(a[i]<min)
                {
                    min=a[i];
                }
            }
        }
        cout<<min<<endl;
        
        
	}
	return 0;
}