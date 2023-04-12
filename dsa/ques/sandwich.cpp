#include <bits/stdc++.h>
using namespace std;

    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int stu1=0, stu0=0, sand1=0, sand0=0;
        int stsize = students.size();
        int sandsize = sandwiches.size();
        for (int i = 0; i < stsize; i++)
        {
            if(students[i]==0)
            {
                stu0++;
            }
            else{stu1++;}
        }
        for (int i = 0; i < sandsize; i++)
        {
            if(sandwiches[i]==0)
            {
                sand0++;
            }
            else{sand1++;}
        }
        int x=0,y=0;
        if(stu1>sand1)x=stu1-sand1;
        if(stu0>sand0)y=stu0-sand0;
        return x+y;
    }

int main()
{
    vector <int> stu ={1,1,1,0,0,1};
    vector <int> sand ={1,0,0,0,1,1};
    cout<<countStudents(stu,sand);
    cout<<"";
}