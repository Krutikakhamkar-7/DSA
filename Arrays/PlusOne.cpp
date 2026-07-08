#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size() - 1; i >= 0; i--)
        {
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};

int main()
{
    Solution obj;

    vector<int> digits = {1,2,9};

    vector<int> ans = obj.plusOne(digits);

    for(int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}