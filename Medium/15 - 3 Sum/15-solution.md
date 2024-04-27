## Test Cases

### Test case 1

Input: <br />
nums = `[-1,0,1,2,-1,-4]` <br />
Output: <br />
`[[-1,-1,2],[-1,0,1]]` <br />
Explanation: <br />
`nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.` <br />
`nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.` <br />
`nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.` <br />
The distinct triplets are [-1,0,1] and [-1,-1,2]. <br />

## Algorithm

1. Sort the array
2. Select a number from the array
3. Find TwoSum of the remaining array with the target of the negated selected number
4. Concat the arrays
5. Repeat until all possible combination are found

| i | Two Sum |