#include <bits/stdc++.h>
using namespace std;

    int trap(vector<int>& height) {
        
        int size = height.size();
        if(size < 3)
        {
            return 0;
        }
        int left[size], right[size];
        int max = -1;

        for (int i = 0; i < size; i++)
        {
            if(max < height[i])
            {
                left[i] = height[i];
                max = height[i];
            }
            else
            {
                left[i] = max;
            }
        }

        max = -1;

        for (int i = size-1; i >= 0; i--)
        {
            if(max < height[i])
            {
                right[i] = height[i];
                max = height[i];
            }
            else
            {
                right[i] = max;
            }
        }
        long int area = 0;
        for(int i = 0; i < size; i++)
        {
            int x = (min(left[i], right[i])-height[i]);

            if(x>0)area+=x;
        }
        return area;

    }

    int main()
    {
        vector <int> v = {0,1,0,2,1,0,1,3,2,1,2,1};
        cout<<trap(v);
        cout<<"";
    }