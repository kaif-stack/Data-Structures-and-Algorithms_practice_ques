#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int r, g, b, k;
        long long int ans = 0;
        long long int balls =0;
        long long int minballs=0;
        cin >> r >> g >> b;
        cin >> k;
        if (r >= k && g >= k && b >= k)
        {
            ans = 3 * (k - 1) + 1;
        }
        else if ((r < k && g < k) || (g < k && b < k) || (r < k && b < k))
        {
            balls = max(max(r, g), b);
            if (balls == r)
            {
                ans = g + b + k;
            }
            else if (balls == g)
            {
                ans = r + b + k;
            }
            else
            {
                ans = r + g + k;
            }
        }
        else
        {
            minballs = min(min(r, g),b);
            if (minballs == r)
            {
                ans = r + 2 * (k - 1) + 1;
            }
            else if (minballs == g)
            {
                ans = g + 2 * (k - 1) + 1;
            }
            else
            {
                ans = b + 2 * (k - 1) + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}