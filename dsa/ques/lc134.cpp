#include <bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
{
    long long int tank = 0;
    int size = gas.size();
    int start = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        tank += gas[i];
        tank -= cost[i];
        if(tank < 0)
        {
            start = i+1;
            tank = 0;
        }
    }
    if(start == size)return -1;
    for (i = 0; i <=start; i++)
    {
        tank += gas[i];
        tank -= cost[i];
        if(tank < 0)return -1;
    }
    return start;
}

int main()
{
    vector<int> cost = {1,2,3,4,5};
    vector<int> gas = {3,4,5,1,2};
    cout<<canCompleteCircuit( cost, gas);
}