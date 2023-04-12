#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long int

int recs(int n){
    if(n==1) return 0;
    else{
        int waah;
        bool opus=false;
        for (int i = 1; i <=n; i++) {
            if(pow(2,i)>n){
                waah=i-1;
                break;
            }
            else if(pow(2,i)==n){
                opus=true;
                break;
            }
        }
        if(opus) return 0;
        else return 1 + recs(n-int(pow(2,waah)));
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int f;
        for (int i = 0; i < 4; i++)
        {
            
        }
        
        
        cin>>n;
        int ans = recs(n);
        cout<<ans<<endl;
    }
    return 0;
}