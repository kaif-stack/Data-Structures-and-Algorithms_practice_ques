#include <bits/stdc++.h>
using namespace std;

    void nextPermutation(vector<int>& nums) { 
        int size = nums.size();
        long long int a=-1, b=-1;

        for (int i = size-1; i > 0; i--)
        {
            if(nums[i-1] < nums[i])
            {
                a=i-1;
                break;
            }
        }
        for (int i = size-1; i >= 0; i--)
        {
            if(nums[i] > nums[a])
            {
                b = i;
                break;
            }
        }
        swap(nums[a], nums[b]);
        int s = 1;
        while((a+s)<=(size-s))
        {
            swap(nums[a+s], nums[size-s]);
            s++;
        }       
        
    }

    int main()
    {
        vector<int> v = {1,2,3};
        nextPermutation(v);
        cout << "Next Permutation";
    }