#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define asc(i,x,n) for(int i=x;i<n;i++)
#define dsc(i,x,n) for(int i=x;i>=n;i--)
#define W(t) int t;cin>>t;while(t--)
#define int long long int
#define ll long long 
#define P(x, y) pair<x, y>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define mod 1000000007
#define mod2 998244353
#define nline '\n'
#define fr(x,n) for(int i=x;i<n;i++)

int square(int n){int sq_root = (int)sqrt(n);if(sq_root*sq_root != n) return -1;else return sq_root;}
bool odd(int n){if(n&1) return true; return false;}
bool power_of_two(int n){ if(n&(n-1)) return false;return true;}
char lowercase(char x){return char(x|' ');}
char uppercase(char x){return char(x|'_');}
int gcd(int a,int b){if(b==0) return a;return gcd(b,a%b);}
int LCM(int a, int b){return ((ll)a * b) / gcd(a, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll modpow(ll x, ll n, int m ){if (x == 0 && n == 0)return 0; ll res = 1;while (n > 0){if (n&1){res = (res * x) % m;}x = (x * x) % m;n /= 2;}return res;}
int modinv(int x, int m ){return modpow(x, m - 2, m);}
void printarr(vi &v, int start, int end){asc(i,start,end)cout << v[i]<<" ";cout<<nline;}
ll maximum(ll a, ll b){if(a>b)return a;return b;}
ll minimum(ll a, ll b){if(a<b)return a;return b;}
 


//----------------------//------------------------------------------------------------//----------------------//
//----------------------//------------------------------------------------------------//----------------------//
//----------------------//------------------------------------------------------------//----------------------//
//----------------------//------------------------------------------------------------//----------------------//


int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi in;
    asc(i,0,n)
    {
        if(s[i] == '*')
        in.push_back(i);
    }
    int size = in.size();
    int cnt = (size+1)/2;
    int steps = 0;
    int left = 0;
    asc(i, in[cnt],in[size-1])
    {
        if(s[i] == '.')
        {
            left++;
        }
        else{
            steps+=left;
        }
    }
    left=0;
    dsc(i, in[cnt],in[0])
    {
        if(s[i] == '.')
        {
            left++;
        }
        else{
            steps+=left;
        }
    }
    return steps;

}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // vi dp(1100, -1);
    W(t){
        // solve();
        //  if(solve()){
        //      cout<<"YES"<<nline;
        //  }
        //  else{
        //       cout<<"NO"<<nline;
        //  }
         cout<<solve()<<nline;
    }   
    // solve();
    // cout<<solve();

    return 0;
}   