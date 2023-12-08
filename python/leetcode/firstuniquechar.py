#https://leetcode.com/problems/first-unique-character-in-a-string/description/

from collections import Counter

class Solution:
    def firstUniqChar(self, s: str) -> int:
        d = Counter(s)
        for val, count in d.items():
            if count == 1:
                return s.find(val)
        return -1