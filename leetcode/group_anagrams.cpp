#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groupedAnagrams;
        vector<string> sortedWords;
        vector<string> sortedCopies;
        vector<string> currentGroup;
        string sortedCandidate; 

        sortedWords = strs; 

        for (size_t i = 0; i < sortedWords.size(); ++i) {
            sort(sortedWords[i].begin(), sortedWords[i].end());
        }

        sortedCopies = sortedWords;

        sort(sortedWords.begin(), sortedWords.end());
        auto last = unique(sortedWords.begin(), sortedWords.end());
        sortedWords.erase(last, sortedWords.end());

        for (string key : sortedWords) {
            for (size_t j = 0; j < strs.size(); ++j) {
                sortedCandidate = sortedCopies[j];
                if (key == sortedCandidate) {
                    currentGroup.push_back(strs[j]);
                }
            }
            groupedAnagrams.push_back(currentGroup);
            currentGroup.clear();
        }

        return groupedAnagrams;
    }
};
