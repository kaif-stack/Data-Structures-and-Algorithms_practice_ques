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
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define pb push_back
#define eb emplace_back
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
#define all(x) x.begin(),x.end()


template<typename T> // cin >> vector
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}

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
 


//----------------------//------------------------------------------------------------//----------------------//
//----------------------//------------------------------------------------------------//----------------------//
//----------------------//------------------------------------------------------------//----------------------//
//----------------------//------------------------------------------------------------//----------------------//


bool check(string s, int k)
{
    char m;
    if(k==1)m='1';
    if(k==0)m='0';
    if(s[0]==m || s[s.length()-1]==m) return false;
    int length = s.length();
    if(length==1)return true;
    asc(i,0,length-1)
    {
        if(s[i] == s[i+1]) {
            return false;
        }
    }
    return true;
}


bool solve(){
    int m,n;
    cin>>m;
    cin>>n;
    string s,t;
    cin>>s>>t;
    if(m==1)return true;
    bool c11=false;
    bool c00=false;
    c11 = check(t,1);
    c00 = check(t,0);
    asc(i,0,s.length()-1)
    {
        if(s[i]=='1' && s[i+1]=='1' && !c11)return false;
        if(s[i]=='0' && s[i+1]=='0' && !c00)return false;
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    W(t){
        // solve();
        
         if(solve()){
             cout<<"Yes"<<nline;
         }
         else{
              cout<<"No"<<nline;
         }

        //  cout<<solve()<<nline;
    }
    // solve();

    return 0;
}