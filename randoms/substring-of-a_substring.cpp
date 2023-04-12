#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    

    vector<int> cap;
    int prev=0;
    int a, b;
    while(prev!=0)
    {
        cin>>a;
        cin>>b;
        cap.push_back(prev-a+b);
    }

    
}
