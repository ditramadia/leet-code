## Test cases

### Test case 1

Input: <br />
lists = [
  `[1,4,5]`
  `[1,3,4]`
  `[2,6]`
  ] </br>
Output: </br>
`[1,1,2,3,4,4,5,6]`

## Algorithm (Divide and Conquer)

### Strategy
1. Divide the lists
2. Compare the first list and the last list
3. Continue until there is only on sorted and merged list inside lists

### Visualization
Lists = `[l1, l2, l3]` </br>
Merge `l1` with `l3` </br>
</br>
Lists = `[l1l3, l2]` </br>
Merge `l1l3` with `l2` </br>
</br>
Lists = `[l1l2l3]` </br>
Return `l1l2l3` </br>
