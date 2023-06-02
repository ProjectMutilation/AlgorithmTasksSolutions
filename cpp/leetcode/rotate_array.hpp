//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
//https://leetcode.com/problems/rotate-array/

#include <vector>
#include <algorithm>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        auto n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.begin() + n - k);
        reverse(nums.begin() + n - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};