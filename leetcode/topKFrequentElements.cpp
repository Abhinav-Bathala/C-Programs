#include <algorithm>
#include <set>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        vector<pair<int,int>> frequency;

        int count = 1;
        for (int i = 1; i <= nums.size(); i++) {
            if (i < nums.size() && nums[i] == nums[i - 1]) {
                count++;
            } else {
                frequency.push_back({count, nums[i - 1]});
                count = 1;
            }
        }

        sort(frequency.rbegin(), frequency.rend());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(frequency[i].second);
        }

        return result;
    }
};
