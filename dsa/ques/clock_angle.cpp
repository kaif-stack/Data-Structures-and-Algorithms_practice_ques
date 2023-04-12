#include <bits/stdc++.h>
using namespace std;

    double angleClock(int hour, int minutes) {
        
        float minangle = minutes*6, hourangle;

        hourangle = hour*30 + (minutes/2);

        if(minutes % 2 ==1)hourangle+=0.5;

        float angle = abs(minangle-hourangle);

        if(angle > 360-angle)
        {
            return angle;
        }
        return angle;

    }

    int main()
    {
        cout << angleClock(3,15);
    }