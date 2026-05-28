#include <iostream>
#include <vector>
using namespace std;

//Brute force, not the most optimal solution.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 1;

        while (i < nums.size() - 1) {
            while (j < nums.size()) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
                ++j;
            }
            ++i;
            j = i + 1;
        }

        return {};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    cout << "Indices: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
