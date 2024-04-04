## Test cases

### Test case 1

Input: <br />
 n = 2 <br />
Output: 2 <br />
Explanation: <br /> There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

### Example 2

Input: <br /> 
n = 3 <br />
Output: 3 <br />
Explanation: <br /> 
There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

## Algorithm

1. Get `climbStairs(n)` by <br />
`climbStairs(n) = climbStairs(n - 1) + climbStairs(n - 2)` 
2. The result will be based on fibonacci sequence
3. Initialize dp with 2 elements, which is the 2 previous value
4. Update the dp by shifting the dp through the array
5. `dp2 = dp1 + dp2` and `dp1 = dp2`

n = `5` <br />
steps = `1 2 3 4 5`

```
    1 2 3 4 5
0 1

    1 2 3 4 5
  1 1

    1 2 3 4 5
    1 2

    1 2 3 4 5
      2 3

    1 2 3 4 5
        3 5

    1 2 3 4 5
          5 8 
```