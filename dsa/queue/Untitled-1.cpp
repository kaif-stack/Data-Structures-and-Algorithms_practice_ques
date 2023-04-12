#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> &a,pair<int, int> &b)
{
    return a.second > b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin>>size;
        map<int, int> m;
        for (int i = 0; i < size; i++)
        {
            int e;
            cin >> e;
            if (m.find(e) == m.end())
            {
                m[e] = 0;
            }
            m[e]++;
        }
        vector<pair<int, int>> A;

        for (auto it : m)
        {
            A.push_back(it);
        }
        int ans;
        sort(A.begin(), A.end(), comp);
        int freq = A[0].second;
        if (A.size() == 1)
        {
            ans = freq / 2 + freq % 2;
            cout << ans << endl;
        }
        else
        {
            auto it = A.begin();
            ++it;
            int halfed = freq / 2 + freq % 2;
            if (halfed > it->second)
            {
                cout << halfed << endl;
            }
            else
            {
                cout << it->second << endl;
            }
        }
    }
    return 0;
}
    