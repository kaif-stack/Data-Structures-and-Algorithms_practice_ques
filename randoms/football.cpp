#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matches;
    cin>>matches;
    string goals[matches];
    int n=0;
    int t1=0, t2=0;
    for(int i=0; i<matches; i++)
    {
        cin>>goals[i];
    }
    string team1, team2;
    team1=goals[0];
    for(int j=0; j<matches; j++)
    {   
        if(team1!=goals[j])
        {
            team2=goals[j];
            break;
        }
    }
    for(int k=0; k<matches; k++)
    {
        if(team1==goals[k])
        {
            t1++;
        }
        else{t2++;}
    }
    if(t1>t2)
    {
        cout<<team1;
    }
    else
    {
        cout<<team2;
    }
}