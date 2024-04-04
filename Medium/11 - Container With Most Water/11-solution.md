## Test Cases

### Test case 1

Input: <br />
`height = [1,8,6,2,5,4,8,3,7]` <br />
Output: `49`

### Test case 2

Input: <br />
`height = [1,1]` <br />
Output: `1`

## Algorithm

1. Initialize 2 pointers of `i` and `j`. Pointer `i` points to the first height and while `j` points to the last height
2. Calculate the area of container using <br /> `min(height[i], height[j]) * (j - i)`
3. If it is the greater than the current max area, then assign it as the new max area
4. Greedily shift the pointer that has the lowest height until both the pointers meet at some height
5. Return the maximum area

height = `[1,8,6,2,5,4,8,3,7]` <br />
Output: `49`

| iteration | i | j | maxArea | 
| :---: | :---: | :---: | :---: |
| 0 | 0 | 8 | 0 < **8** |
| 1 | 1 | 8 | 8 < **49** |
| 2 | 1 | 7 | 18 < **49** |
| 3 | 1 | 6 | 30 < **49** |
| 4 | 2 | 6 | 48 < **49** |
| 5 | 3 | 6 | 6 < **49** |
| 6 | 4 | 6 | 10 < **49** |
| 7 | 5 | 6 | 4 < **49** |

return `49`