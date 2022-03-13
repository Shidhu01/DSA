#include<bits/stdc++.h>

using namespace std;


int maxProfit(vector <int> &prices)
{

    int curPrice = INT_MAX;
    int profit =0;
    for (int i=0; i<prices.size(); i++)
    {
        if(prices[i] < curPrice)
        {
            curPrice = prices[i];
        }
        else
        {
            profit = max(profit, prices[i]-curPrice);
        }
    }
    return profit;
    
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for (int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<maxProfit(arr);
    return 0;

}