#https://leetcode.com/problems/two-sum/
#Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.


class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        encountered_values = {}
        for i,item in enumerate(nums):
            if target - item in encountered_values:
                return [encountered_values[target - item], i]
            encountered_values[item] = i
        return []