#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    vector <int> v;
    stack <pair<int,int>> s;
    int min=INT_MIN;
    StockSpanner() {
    }
    
    int next(int price) {
            v.push_back(price);
        if(min>price)return v.size();
        if(s.size()>0 && s.top().first > price)
        {
            int x = v.size()-s.top().second-1;
            s.push({price, v.size()-1});
            return x;
        }
        else
        {
            while(s.size()>0 && s.top().first<= price)
            {
                s.pop();
            }
            if(s.size() == 0)
            {
                s.push({price, v.size()-1});
                return v.size();
            } 
            else
            {
            int x = v.size()-s.top().second-1;
            s.push({price, v.size()-1});
            return x;
            }
        }
        return 1;
    }
};


int main()
{
StockSpanner stockSpanner = StockSpanner();
cout<<stockSpanner.next(100); // return 1
cout<<stockSpanner.next(80);  // return 1
cout<<stockSpanner.next(60);  // return 1
cout<<stockSpanner.next(70);  // return 2
cout<<stockSpanner.next(60);  // return 1
cout<<stockSpanner.next(75);  // return 4, because the last 4 prices (including today's price of 75) were less than or equal to today's price.
cout<<stockSpanner.next(85);  // return 6
}