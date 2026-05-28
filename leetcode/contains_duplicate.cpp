#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }
};

/*
Original O(n^2) solution (not optimal).
Notes:
- This version is O(n^2) and will time out on large LeetCode inputs.
- The optimized version above is O(n log n) due to sorting.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;

        vector<int> no_duplicates;
        no_duplicates.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            bool found = false;

            for (int j = 0; j < no_duplicates.size(); j++) {
                if (nums[i] == no_duplicates[j]) {
                    found = true;
                    break;
                }
            }

            if (found) {
                return true;
            } else {
                no_duplicates.push_back(nums[i]);
            }
        }

        return false;
    }
};

*/
