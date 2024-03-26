## Test cases

### Test case 1
Input: <br/> 
l1 = `[2,4,3]` <br/> 
l2 = `[5,6,4]` <br/>
Output: `[7,0,8]` <br/>
Explanation: `342 + 465 = 807`.

### Test case 2

Input: <br/> 
l1 = `[0]` <br/> 
l2 = `[0]` <br/>
Output: `[0]`

### Test case 3

Input: <br/>
l1 = `[9,9,9,9,9,9,9]` <br/> 
l2 = `[9,9,9,9]` <br/>
Output: `[8,9,9,9,0,0,0,1]`

## Algorithm

1. Use recursion or iteration approach
2. Add both value
3. Add the carry to the next recursion call
4. Stops if all of the list is finished

| i | l1.val | l2.val | sum | c | Explanation
| :---: | :---: | :---: | :---: | :---: | :---
| 0 | 9 | 9 | 8 | 1 | 9 + 9 = 18, 8 as the sum, 1 as the carry. Set the next value of either l1 or l2 (depens which one is not empty) as l.next.val + c. Set the next as addTwoNumbers(l1.next, l2.next)
| 1 | 9 + 1 | 9 | 9 | 1 | |
| 2 | 9 + 1 | 9 | 9 | 1 | |
| 3 | 9 + 1 | 9 | 9 | 1 | |
| 4 | 9 + 1 | 0 | 0 | 1 | |
| 5 | 9 + 1 | 0 | 0 | 1 | |
| 6 | 9 + 1 | 0 | 0 | 1 | |
| 7 | 0 + 1 | 0 | 1 | 0 | |

Result is 89990001