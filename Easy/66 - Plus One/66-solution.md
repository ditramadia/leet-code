## Test cases

### Test case 1

Input: `[1,2,3]` <br />
Output: `[1,2,4]` <br />
Explanation: The array represents the integer `123`.
Incrementing by one gives `123 + 1 = 124`.
Thus, the result should be `[1,2,4]`.

### Example 2

Input: `[4,3,2,1]` <br />
Output: `[4,3,2,2]` <br />
Explanation: The array represents the integer `4321`.
Incrementing by one gives `4321 + 1 = 4322`.
Thus, the result should be `[4,3,2,2]`.

### Example 3

Input: `[9]` <br />
Output: `[1,0]` <br />
Explanation: The array represents the integer `9`.
Incrementing by one gives `9 + 1 = 10`.
Thus, the result should be `[1,0]`.

## Algorithm

1. Iterate through the vector from the tail.
2. Add the digit with one.
3. If the result has carry, go to the previous element and add it with the carry
4. If the length of the array increase because of the carry, insert the last carry into the first element of the vector