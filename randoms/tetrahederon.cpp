#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void rec(char v[], int count, int n, char prev, int &ans){
    if(count==n-1){
        return;
    }
    else{
        for (int i = 0; i < 3; i++)
        {
            if(v[i]==prev){
                continue;
            }
            else{
            ans++;
            rec(v,count+1,n,v[i],ans);
            }
        }
        
    }
    
}
    int main()
{
    int n;
    cin>>n;
    char arr[]={'A','B','C'};
    char prev = 'D';
    int count=0;
    int ans=0;
    rec(arr,count,n,prev,ans);
    cout<<ans;


}