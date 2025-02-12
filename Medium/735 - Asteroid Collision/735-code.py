'''
Asteroid Collision
https://leetcode.com/problems/asteroid-collision/

Created: 2025-02-12
Updated: 2025-02-12
Author: Ditra Amadia

O(n) time complexity
0ms runtime
'''

from typing import List

class Solution:
  def asteroidCollision(self, asteroids: List[int]) -> List[int]:
    stack = []

    for a in asteroids:
        while stack and a < 0 < stack[-1]:
            if -a > stack[-1]:
                stack.pop()
                continue
            elif -a == stack[-1]:
                stack.pop()
            break
        else:
            stack.append(a)
      
    return stack