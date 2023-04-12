int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
{

    long long int tank = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        tank = 0;
        tank+=gas[i];
        tank-=cost[i];
        int j = i+1;
        if(j == gas.size())j=0;
        if(tank<0)continue;
        while(j != i)
        {
            tank+=gas[j];
            tank-=cost[j++];
            if(tank<0)break;
            if(j == gas.size())j=0;
        }
        if(j==i)return i;
    }
    return -1;
}