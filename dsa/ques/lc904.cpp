#include <bits/stdc++.h>
using namespace std;
    
    int numUniqueEmails(vector<string>& emails) {
        
        int len = emails.size();
        set <string> set;

        for (int i = 0; i < len; i++)
        {
            int slen = emails[i].length();
            int j=0;
            {
                while(emails[i][j] != '@')
                {
                    if(emails[i][j] == '.')
                    {
                        emails[i].erase(j , 1);
                        j--;
                    }
                    else if(emails[i][j] == '+')
                    {
                        emails[i].erase(j , 1);
                        j--;
                        while(emails[i][j+1]!='@')
                        {
                            emails[i].erase(j+1 , 1);
                        }
                    }
                    j++;
                }
            }
            set.insert(emails[i]);
        }
        return set.size();
    }

int main()
{
    vector <string> v = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    cout<<numUniqueEmails(v);
}