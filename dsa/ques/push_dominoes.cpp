#include <bits/stdc++.h>
using namespace std;

string pushDominoes(string dominoes)
{
    int size = dominoes.size();
    int last = -1;
    int arr[size];
    for (int i = size-1; i >= 0; i--)
    {
        if(last == -1 || dominoes[i] == 'R')
        {
            last = -1;
            arr[i] = -1;
        }
        if(dominoes[i] == 'L')
        {
            last = 0;
            arr[i] = last;
        }
        else if( dominoes[i] == '.' && last == -1)
        {
            arr[i] = last;
        }
        else if( dominoes[i] == '.' && last != -1)
        {
            last++;
            arr[i] = last;
        }
    }
    char l = '.';

    for (int i = 0; i < size; i++)
    {
        dominoes[i] = '.';
        if(arr[i] >= 0 && l=='.')
        {
            for(int j=i; j <= arr[i]; j++)
            {
                dominoes[i+j]='L';
            }
        }
        
    }
    

    return dominoes;
    
}

int main()
{
    cout<<pushDominoes(".L.R...LR..L..");
}