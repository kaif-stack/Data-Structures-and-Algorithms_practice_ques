#include <bits/stdc++.h>
using namespace std;
int maxpal(string s, int count)
{

    int length=s.length();
    for (int i = length; i > 0; i--)
    {
        int number=(length-i+1);
        for (int j = 0; j < number; j++)
        {
            string rev = s.substr(j,j+i);
            string rev2=rev;
            reverse(rev2.begin(),rev2.end());
            if(rev==rev2)
            {
                if(j>2)
                {
                    count += maxpal(rev, count);
                }
                if(j==2 && s[0]==s[1])
                {
                    count+=1;
                }
                else if(j==2 && s[0]!=s[1])
                {
                    count+=2;
                }
                if((j+i)<(s.length()-2))
                {
                    count += maxpal(rev, count);
                }
                if((s.length()-(j+i)) && s[s.length()]==s[s.length()-1])
                {
                    count+=1;
                }
                else if((s.length()-(j+i)) && s[s.length()]!=s[s.length()-1])
                {
                    count+=2;
                }
                return count;
            }

        }
        
    }
    return 0;
    
}
int main()
{
    string s="eegoogle";
    // cin>>s;
    int count=0;
    cout<<maxpal(s, count);
    return 0;
    

}