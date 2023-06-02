//https://leetcode.com/problems/reverse-bits/
//Reverse bits of a given 32 bits unsigned integer.
#include<bitset>
#include<string>
#include <algorithm>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        auto bits = std::bitset<32>(n).to_string();
        reverse(bits.begin(),bits.end());
        return std::bitset<32>(bits).to_ulong();
    }
};