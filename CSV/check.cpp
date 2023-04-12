#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    ifstream placement;
    placement.open("placement.csv",ios::in);
    int a, b;
    int total=0;
    while(getline(placement,line))
    {
        string ctc, number;

        stringstream str(line);
        
        while(getline(str,ctc, ' '))
        {
            getline(str,number, ' ');
            if(stoi(ctc) >= 10)
            {
                total+=stoi(number);
            }
        }
    }
    cout<<total;
}