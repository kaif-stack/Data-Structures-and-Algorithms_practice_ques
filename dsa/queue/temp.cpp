#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        std::map<int, int> m;
        std::set<int> s;
        cin >> size;
        std::vector<int> arr = {};
        for (int i = 0; i < size; i++)
        {
            int e;
            cin >> e;
            arr.push_back(e);
        }
        int i=0;
        bool pass=true;
        while(i<size){
            if (!s.count(arr[i]))
            {
                m[arr[i]] = 1;
                s.insert(arr[i]);
                i++;
                while (arr[i] == arr[i - 1])
                {
                    m[arr[i]]++;
                    i++;
                }
            }
            else
            {
                cout << "NO" << endl;
                pass = false;
                break;
            }
        }
        if(pass){
        s.clear();
        bool flag = false;
        for(auto i : m){
            if(!s.count(i.second)){
                s.insert(i.second);
            }
            else{
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }
        }
    }
    return 0;
}