#include <bits/stdc++.h>
using namespace std;

 void getAttributes(string s)
{
    int length = s.length();
    int i = 0;
    while(s[i] != '?')i++;
    while(i<length)
    {
        if(s[i] == '&')
        {
            cout<<endl;
            i++;
            continue;
        }
        if(s[i] == '=')
        {
            cout<<endl<<"--";
            i++;
            continue;
        }
        if(s[i] == '%')
        {
            string hex = s.substr(i+1,2);
            if(hex == "2F")
            {
                cout<<"/";
            }else
            {
                int decimalValue = stoi(hex, nullptr, 16);
            cout<<decimalValue;
            }
            i+=3;
            continue;
        }
        cout<<s[i];
        i++;
    }
}
int main()
{
    string s;
    cout<<"Enter Link: "<<endl;
    cin>>s;
    getAttributes(s);
}