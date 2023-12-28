d(int n){if(n&1) return true; return false;}
// bool power_of_two(int n){ if(n&(n-1)) return false;return true;}
// char lowercase(char x){return char(x|' ');}
// char uppercase(char x){return char(x|'_');}
// int gcd(int a,int b){if(b==0) return a;return gcd(b,a%b);}
// int LCM(int a, int b){return ((ll)a * b) / gcd(a, b);}
// ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
// ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
// ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// ll modpow(ll x, ll n, int m ){if (x == 0 && n == 0)return 0; ll res = 1;while (n > 0){if (n&1){res = (res * x) % m;}x = (x * x) % m;n /= 2;}return res;}
// int modinv(int x, int m ){return modpow(x, m - 2, m);}