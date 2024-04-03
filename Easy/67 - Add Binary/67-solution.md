## Test cases

### Test case 1

Input: <br /> 
a = `"11"` <br /> 
b = `"1"` <br />
Output: `"100"` <br />

### Example 2

Input: <br /> 
a = "1010" <br /> 
b = "1011" <br />
Output: `"10101"` <br />

## Algorithm

The idea is to convert the digit from char type to int type so we can do base 10 operations

`0` is `0` <br />
`1` is `1` <br />
`10` is `2` <br />

1. Initialize res = `""` and carry = `0`
2. Initialize 2 pointers of `i` and `j` to point to the currently evaluated char of string `a` and `b` from end to start
3. Initialize `sum` as `sum = carry`
4. Convert the digit to integer and add them
5. If the sum is less or equal than `1`, simply add it to `res`
6. If the sum is greater than `1`, we can add the carry by `sum % 2`. The `res` will be added by `1`
7. Decrement the pointers each loop
8. Stop the loop if both string of `a` and `b` are evaluated, meaning the `i` and `j` are less than 0
9. Reverse the result

### Example
`a = 1010` <br />
`a = 1011` <br />

| loop | i | j | a | b | sum | carry | res |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| 0 | 3 | 3 | 0 | 1 | 1 -> 1 | 0 | 1 |
| 1 | 2 | 2 | 1 | 1 | 2 -> 10 | 1 | 10 |
| 2 | 1 | 1 | 0 | 0 | 1 -> 1 | 0 | 101 |
| 3 | 0 | 0 | 1 | 1 | 2 -> 10 | 1 | 1010 |
| - | - | - | - | - | 1 -> 1 | 0 | 10101 |

Reverse the result, so we get `10101`

