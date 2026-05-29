#include <vector>
#include <climits>

/*
You are given an integer array nums.
You replace each element in nums with the sum of its digits.
Return the minimum element in nums after all replacements.
*/

using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int answer = INT_MAX;

        for (int i : nums) {
            int sum = 0;

            while (i > 0) {
                sum += i % 10;
                i /= 10;
            }
            
            answer = min(answer, sum);
        }

        return answer;
    }
};
