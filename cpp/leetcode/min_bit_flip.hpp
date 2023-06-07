//https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/
#include <bitset>

class Solution {
    public:
        int minFlips(int a, int b, int c) { 
            return std::bitset<32>((a|b)^c).count() + std::bitset<32>((a & b & ((a | b) ^ c))).count();
        }
};
