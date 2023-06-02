class Solution:
    def rotate(self, nums: list[int], k: int) -> None:        
        nums[:] = nums[-(k % len(nums)):] + nums[:-(k % len(nums))]