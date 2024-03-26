## Test cases
### Test case 1

s = `PAYPALISHIRING` <br />
numRows = `3` <br />
Output = `PAHNAPLSIIGYIR` <br />

```
P   A   H   N 
A P L S I I G 
Y   I   R     
```

### Test case 2
s = `PAYPALISHIRING` <br />
numRows = `4` <br />
Output = `PINALSIGYAHRPI` <br />

```
P     I    N
A   L S  I G
Y A   H R
P     I
```

## Algorithm
Create array of string with n number of strings <br />
```
ret = ['', '', '']
``` 

make a flag to indicate the current direction. Is it down or is it up?

```d = true```

Iterate through all the characters and put it in its corresponding string

| i | r | char | d | ret[r] | Explaination
| :---: | :---:  | :---:  | :---: | :---: | :---: |
| 0 | 0 | P | t | "P", "", "" | Insert char into ret[r]
| 1 | 1 | A | t | "P", "A", "" | Insert char into ret[r]
| 2 | 2 | Y | t | "P", "A", "Y" | Insert char into ret[r] and decrement the r because r == numRows-1
| 3 | 1 | P | f | "P", "AP", "Y" | Insert char into ret[r]
| 4 | 0 | A | f | "PA", "AP", "Y" | Insert char into ret[r] and increment r because r == 0
| 5 | 1 | L | t | "PA", "APL", "Y" | Insert char into ret[r]
| 6 | 2 | I | t | "PA", "APL, "YI" | Insert char into ret[r] and decrement the r because r == numRows - 1
| 7 | 1 | S | f | "PA", "APLS", "YI" | Insert char into ret[r]

and so on...

Concatenate all the strings into one final string