## Test Cases

### Test case 1

Input: <br />
s = `"42"` <br />
Output: `42`

### Test case 2

Input: <br /> 
s = `"   -42"` <br />
Output: `-42`

### Test case 3

Input: <br />
s = `"4193 with words"` <br />
Output: `4193`

## Algorithm

1. Check for leading white space. If exists, skip all of them. Advance i
2. Check if c = '+' or '-' and set the multiplier m. Advance i
3. If c is a digit, check if it overflows before being added. If not overflow, add it to the result with `r = r * 10 + (c - 48)`.
4. Return `result * multiplier`

`"  -4200 oke"`

| i | c | r | m | Explanation |
| :---: | :---: | :---: | :---:| :--- |
| 0 |   | 0 | 1 | Ignore white space |
| 1 |   | 0 | 1 | Ignore white space |
| 2 | - | 0 | -1 | Set m to `-1` |
| 3 | 4 | 4 | -1 | Add c to r | 
| 3 | 2 | 42 | -1 | Add c to r | 
| 3 | 0 | 420 | -1 | Add c to r | 
| 3 | 0 | 4200 | -1 | Add c to r | 

r = `-4200`