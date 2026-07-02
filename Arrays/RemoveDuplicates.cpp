#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;

        for(int j = 1; j < nums.size(); j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int k = obj.removeDuplicates(nums);

    cout << "k = " << k << endl;

    cout << "Array: ";

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}