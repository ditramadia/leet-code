## Test Cases

### Test case 1

Input: <br /> 
x = `123` <br />
Output: `321` <br />

### Test case 2

Input: <br />
x = `-123` <br />
Output: `-321`

### Test case 3

Input: <br />
x = `120` <br />
Output: `21`

## Algorithm

| i | r | x | Explanation |
| :---: | :---: | :---: | :--- |
| 0 | 0 | 123 | r = r * 10 + x % 10; x /= 10 |
| 1 | 3 | 12 | r = r * 10 + x % 10; x /= 10 |
| 2 | 32 | 1 | r = r * 10 + x % 10; x /= 10 |
| 3 | 321 | 0 | x == 0 -> stop

| i | r | x | Explanation |
| :---: | :---: | :---: | :--- |
| 0 | 0 | 120 | r = r * 10 + x % 10; x /= 10 |
| 1 | 0 | 12 | r = r * 10 + x % 10; x /= 10 |
| 1 | 2 | 1 | r = r * 10 + x % 10; x /= 10 |
| 1 | 21 | 0 | r = r * 10 + x % 10; x /= 10 |