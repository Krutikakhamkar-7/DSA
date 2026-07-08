#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int ans = nums.size();

        for(int i = 0; i < nums.size(); i++)
        {
            ans ^= i;
            ans ^= nums[i];
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {3,0,1};

    cout << obj.missingNumber(nums);

    return 0;
}