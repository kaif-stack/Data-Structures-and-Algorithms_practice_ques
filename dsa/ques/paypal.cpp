#include <bits/stdc++.h>
using namespace std; 

int getmin(vector <int> &v)
{
    int res=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]< v[res])res = i;
    }
    return res;
}

vector<int> assignRequests(int n, vector<int>& arrival, vector<int>& burstTime) {
    vector<int> result;
    int currtime=0;
    int now_min = -1;
    vector<pair<int,int>>v;
    for(int i=0;i<n; i++)
    {
        v.push_back({arrival[i],burstTime[i]});
    }
    sort(v.begin(),v.end());
    
}

int main() {
    int n = 3;
    vector<int> arrival = {2, 4, 1, 8, 9};
    vector<int> burstTime = {7, 9, 2, 4, 5};

    vector<int> assignedServers = assignRequests(n, arrival, burstTime);

    for (int server : assignedServers) {
        cout << server << " ";
    }
    cout << endl;

    return 0;
}