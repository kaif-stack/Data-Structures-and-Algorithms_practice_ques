    #include <bits/stdc++.h>
    using namespace std;

    int maxArea(vector<int>& height) {
        int size = height.size()-1;
        if(size==0 || size==1)return 0;
        if(size==2)
        {
            return min(height[0], height[1]);
        }
        long long int maxArea = 0;
        long long int l=0;
        while(l<size)
        {
            if((min(height[l], height[size])*(size-l)>maxArea))
            {
                maxArea=min(height[l], height[size])*(size-l);
            }
            if(height[l]>=height[size])
            {
                size--;
            }
            else if(height[l]<height[size])
            {
                l++;
            }
        }
        return maxArea;
    }


    int main()
    {
        vector<int> v={1,1};
        cout <<maxArea(v);
    }