#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0)
        {
            return false;
        }

        int original = x;
        long long reverse = 0;

        while(x > 0)
        {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }

        return original == reverse;
    }
};

int main()
{
    Solution obj;

    int x = 121;

    if(obj.isPalindrome(x))
        cout << "true";
    else
        cout << "false";

    return 0;
}