#include <bits/stdc++.h>
using namespace std;

    int common(int a1, int a2, int b1, int b2)
    {
        if(b1<a2)
        {
            if(b2<=a2)return b2-b1;
            if(b2>a2)return a2-b1;
        }
        else{
            return 0;
        }
    }


    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        long int area1 = (ax2-ax1)*(ay2-ay1);
        long int area2 = (bx2-bx1)*(by2-by1);
        long int commonarea;
        long int commonx, commony;

        if(ax1<= bx1)
        {
            commonx = common(ax1, ax2, bx1, bx2);
        }
        else
        {
            commonx = common(bx1, bx2, ax1, ax2);
        }
        if(ay1<= by1)
        {
            commony = common(ay1, ay2, by1, by2);
        }
        else
        {
            commony = common(by1, by2, ay1, ay2);
        }
        commonarea = commonx*commony;
        return area1 + area2 - commonarea;
    }