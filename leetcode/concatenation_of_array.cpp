#include <iostream> 
#include <vector> 

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int count = nums.size();
        for(size_t i = 0; i < count; ++i){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
