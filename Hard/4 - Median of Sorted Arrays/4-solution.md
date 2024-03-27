## Test cases

### Test case 1

Input: <br /> 
nums1 = `[1,3]` <br />
nums2 = `[2]` <br />
Output: `2.00000` <br />
Explanation: <br />
merged array = `[1,2,3]` and median is `2`.

### Example 2

Input: <br />
nums1 = `[1,2]` <br />
nums2 = `[3,4]` <br />
Output: `2.50000` <br />
Explanation: <br />
merged array = `[1,2,3,4]` and median is `(2 + 3) / 2 = 2.5`.

## Algorithm

1. Use two pointers for each array (l1, r1, l2, r2)
2. Shift the left pointer with the smallest value 
3. Shift the right pointer with the biggest value
4. Store the last evaluated value to a variable (l and r)
5. If the pointer cannot shift anymore (rn < ln)
6. Get the median from the l and r (l + r)/2

| l1 | r1 | l2 | r2 | l | r | Explanation |
| :---: | :---: | :---: | :---: | :---: | :---: | :--- |
| 0 | 1 | 0 | 1 | 1 | 4 | nums1[l1] < nums2[l1], so l = nums1[l1]. Shift the l1 pointer. nums2[r2] > nums2[r1], so r = nums2[r2]. Shift the r2 pointer.
| 1 | 1 | 0 | 0 | 2 | 3 | l1 == r1, do not shift. l2 == r1, do not shift.

Median is `(l + r) / 2 = (2 + 3) / 2 = 2.5`

| l1 | r1 | l2 | r2 | l | r | Explanation |
| :---: | :---: | :---: | :---: | :---: | :---: | :--- |
| 0 | 1 | 0 | 0 | 1 | 3 | nums1[l1] < nums2[l1], so l = nums1[l1]. Shift the l1 pointer. nums1[r1] > nums2[r2], so r = nums1[r1]. Shift the r1 pointer. l2 == r2, do not shift.
| 1 | 0 | 0 | 0 | 2 | 2 | r1 < l1, ignore the l1 and r1. l = nums2[l2] and r = nums2[r2]

Median is `(l + r) / 2 = (2 + 2) / 2 = 2`