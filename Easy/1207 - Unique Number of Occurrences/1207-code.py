'''
Unique Number of Occurrences
https://leetcode.com/problems/unique-number-of-occurrences/

Created: 2025-02-09
Updated: 2025-02-09
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

from typing import List

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        mp = {}
        
        for n in arr:
            if n not in mp:
                mp[n] = 0
            else:
                mp[n] += 1
        
        ls = mp.values()

        return len(ls) == len(set(ls))
        
arr = [1,2]
print(Solution().uniqueOccurrences(arr))