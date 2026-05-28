#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1; 
        bool status = false;

        // Store original indices before sorting
        vector<pair<int,int>> v;
        for(int k = 0; k < nums.size(); k++)
            v.push_back({nums[k], k});

        // Sort by value
        sort(v.begin(), v.end());

        while(status == false){
            int sum = v[i].first + v[j].first;

            if(sum == target){
                break;
            }
            else if(sum > target){
                --j;   // move right pointer left
            }
            else{
                ++i;   // move left pointer right
            }
        }

        return {v[i].second, v[j].second};
    }
};
