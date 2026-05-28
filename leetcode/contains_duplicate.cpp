#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Fastest LeetCode-passing solution (O(n log n))
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    bool result = containsDuplicate(nums);

    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}



/*
Original Solution without considering time complexity. Have 2 vectors, one for all the numbers,
one for keeping non duplicates. Solution is invalid since time complexity is O(n^2)

#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    if (nums.empty()) return false;

    vector<int> no_duplicates;
    no_duplicates.push_back(nums[0]);

    for (size_t i = 1; i < nums.size(); ++i) {
        bool found = false;

        for (size_t j = 0; j < no_duplicates.size(); ++j) {
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

int main() {
    vector<int> nums = {1, 2, 3, 4};

    bool result = containsDuplicate(nums);

    cout << (result ? "true" : "false") << endl;

    return 0;
}

*/
