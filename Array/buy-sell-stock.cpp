// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int minPrice = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (minPrice > prices[i])
        {
            minPrice = prices[i];
        }
        int currentProfit = prices[i] - minPrice;
        if (currentProfit > maxProfit)
        {
            maxProfit = currentProfit;
        }
    }
    return maxProfit;
}

int main()
{
    int input;
    vector<int> prices;
    while (cin >> input)
    {
        prices.push_back(input);
    }
    cout << maxProfit(prices);
}