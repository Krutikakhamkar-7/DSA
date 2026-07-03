#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            else if(prices[i] - minPrice > maxProfit)
            {
                maxProfit = prices[i] - minPrice;
            }
        }

        return maxProfit;
    }
};

int main()
{
    Solution obj;

    vector<int> prices = {7,1,5,3,6,4};

    cout << obj.maxProfit(prices);

    return 0;
}