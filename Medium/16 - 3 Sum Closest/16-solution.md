## Test Cases

### Test case 1

Input: <br/> 
nums = `[-1,2,1,-4]` <br/>
 target = `1` <br/>
Output: `2` <br/>
Explanation: The sum that is closest to the target is `2`. `(-1 + 2 + 1 = 2)`.

## Algorithm

1. Initialize ret and delta
2. Sort the array
3. Select a number from the array
4. Iterate using binary search to find the delta of target and sum
5. If the delta is smaller, update the ret
6. If the delta is 0, return the ret

Example: <br />
nums = `[-4, -1, 1, 2]` <br />
target = `1`

| i | l | r | a | b | c | sum | target | delta | ret |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | -4 | 1 | 5 | -4 | 
| 0 | 1 | 3 | -4 | -1 | 2 | -3 | 1 | 4 | -3 | 
| 0 | 2 | 3 | -4 | 1 | 2 | -1 | 1 | 2 | -1 |
| 1 | 2 | 3 | -1 | 1 | 2 | 2 | 1 | 1  | 2 |

return `2`

Example: <br />
nums = `[4,0,5,-5,3,3,0,-4,-5]` <br />
sorted nums = `[-5,-5,-4,0,0,3,3,4,5]` <br />
target = `-2`
| i | l | r | a | b | c | sum | target | delta | ret |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| - | - | - | - | - | - | -5 | -2 | 3 | -5 |
| 0 | 1 | 8 | -5 | -5 | 5 | -5 | -2 | 3 | -5 |
| 0 | 2 | 8 | -5 | -4 | 5 | -4 | -2 | 2 | -4 |
| 0 | 3 | 8 | -5 | 0 | 5 | 0 | -2 | 2 | -4 |
| 0 | 3 | 7 | -5 | 0 | 4 | -1 | -2 | 1 | -1 |
| 0 | 3 | 6 | -5 | 0 | 3 | -2 | -2 | 0 | -2 |

return `-2`