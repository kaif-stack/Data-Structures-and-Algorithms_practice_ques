#include <bits/stdc++.h>
using namespace std;


    int pivotIndex(vector<int>& nums) {
        long long int sum=0;
        int size=nums.size();
        vector <int> sums(size+1, -1);       //0,1,8,11,18,22
        vector <int> suml(size+1, -1);       //27,20,17,11,6,0
        sums[0]=0;
        suml[size-1]=0;
        for(int i=0; i<size; i++)
        {
            sum+=nums[i];
            sums[i+1]=sum;
        }
        sum=0;

        for(int i=size-1; i>0; i--)
        {
            sum+=nums[i];
            suml[i-1]=sum;
        }
        for (int i = 0; i < size; i++)
        {
            if(suml[i]==sums[i])
            {
                return i;
            }
        }
        return -1;
    }

    int main()
    {
        vector <int> v= {1,7,3,6,5,6};
        cout<<pivotIndex(v);
    }