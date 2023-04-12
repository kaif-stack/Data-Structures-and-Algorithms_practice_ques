#include <bits/stdc++.h>
using namespace std;

    int trap(vector<int>& height) {
        
        long int total = 0;
        long int last=0;
        long int size = height.size()-1;
        for (int i = 0; i < size; i++)
        {
            if(height[i] > last)
            {
                last = height[i];
                continue;
            }
            else
            {
                total+=last-height[i];
            }
        }
        return total;
    }