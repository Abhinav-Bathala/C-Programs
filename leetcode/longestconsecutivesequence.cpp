#include <vector> 
#include <algorithm>
using namespace std; 

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int current = 1;

        for (size_t i = 0; i < nums.size() - 1; ++i) {
            if (nums[i+1]-1 == nums[i]) {
                current++;
            }
            else if (nums[i + 1] != nums[i]) { 
                longest = max(longest, current);
                current = 1;
            }
        }

        return max(longest, current);
    }
};
