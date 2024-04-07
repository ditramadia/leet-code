## Test cases

### Test case 1

Input: <br />
root = `[1,null,2,3]` <br />
Output: `[1,3,2]` <br />

## Algorithm

```
  1
      2
    3
```

### Recursive

inorderTraversal(root.left) + [root.value] + inorderTraversal(root.right)

### Iterative

Inspired by:
<a href="https://leetcode.com/problems/binary-tree-inorder-traversal/solutions/31213/iterative-solution-in-java-simple-and-readable/">lvlolitte</a>

1. Find the most left child, while adding all the passed node to the `stack`
2. Set `i` to the top of the `stack`
3. Add `i` to the `result`, and pop the `stack`. Set `i` to the newest top of the `stack` 
4. Find the right child of the `i` and add it into the `stack`.
5. Repeat 1 - 4 until the `stack` is empty **AND** `i` set to null

```
res = []
stack = []
i = root

while (!stack.isEmpty || i != null)
  // Add the i into the stack
  while (i != null)
    stack.push(i)
    
    // Find the left most child of i
    i = i.left
  
  // Add the i into the res and pop it from the stack
  i = stack.pop()
  res.push(i)
  
  // Find the right child of i to be evaluated (set it to i)
  i = i->right
```