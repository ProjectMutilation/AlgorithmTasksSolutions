#include <numeric>
#include <string>
#include <functional>


// https://leetcode.com/problems/find-the-difference/description/
class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        const char sChars = std::accumulate(s.begin(), s.end(), 0, std::bit_xor<>());
        const char tChars = std::accumulate(t.begin(), t.end(), 0, std::bit_xor<>());
        return sChars ^ tChars;
    }
};