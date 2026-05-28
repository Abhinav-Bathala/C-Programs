#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        string reversed_num = num;    
        reverse(reversed_num.begin(), reversed_num.end());
        return (num == reversed_num);
    }
};
